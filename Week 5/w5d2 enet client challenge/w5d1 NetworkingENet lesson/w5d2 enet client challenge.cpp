#define NOMINMAX

#include <iostream>
#include <string>
#include <thread>

#include <enet/enet.h>

using namespace std;

ENetAddress address;
ENetEvent event;
ENetHost* client = nullptr;
ENetPeer* peer;

constexpr auto LOCALSERVER_HOST = "127.0.0.1";
constexpr int SERVER_PORT = 1234; // 1234 is the port number given from tutorial

bool quitChat = false;
string clientName;
string clientMessage = "";
bool sendPacket = false;

bool CreateClient();
void SendPacket(string message);
void GetInput();

int main(int argc, char** argv)
{
    cout << "Welcome to the chat room!" << endl;
    cout << "Enter your username to be used in the chat server: " << endl;
    getline(cin, clientName);

    if (enet_initialize() != 0)
    {
        cout << "An error occurred while initializing ENet." << endl;
        return EXIT_FAILURE;
    }
    atexit(enet_deinitialize);

    if (!CreateClient())
    {
        cout << "An error occurred while trying to create an ENet client host." << endl;
        exit(EXIT_FAILURE);
    }

    // connect to the server
    enet_address_set_host(&address, LOCALSERVER_HOST);
    address.port = SERVER_PORT;
    peer = enet_host_connect(client, &address, 2, 0);

    if (peer == NULL)
    {
        cout << "No available peers for initiating an ENet connection." << endl;
        exit(EXIT_FAILURE);
    }

    // Wait up to 5000ms for the connection attempt to succeed
    if (enet_host_service(client, &event, 5000) > 0 && event.type == ENET_EVENT_TYPE_CONNECT)
        cout << "Connection to " << LOCALSERVER_HOST << ":" << SERVER_PORT << " succeeded." << endl;
    else
    {
        // Either 5000ms was reached or the client disconnected
        enet_peer_reset(peer);
        cout << "Connection to " << LOCALSERVER_HOST << ":" << SERVER_PORT << " failed." << endl;
    }

    thread InputThread(GetInput);

    while (!quitChat)
    {
        /* Wait up to 1000 milliseconds for an event. */
        while (enet_host_service(client, &event, 1000) > 0)
        {
            switch (event.type)
            {
            case ENET_EVENT_TYPE_CONNECT:
            {
                string packetString = clientName + " has connected.";
                SendPacket(packetString);
                break;
            }
            case ENET_EVENT_TYPE_RECEIVE:
                HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

                string receivedMessage = (char*)event.packet->data;
                string user = receivedMessage.substr(0, receivedMessage.find(":"));

                cout << receivedMessage << endl;

                // Delete the packet when done
                enet_packet_destroy(event.packet);
            }
        }
    }

    if (client != nullptr) enet_host_destroy(client);

    InputThread.join();

    return EXIT_SUCCESS;
}

bool CreateClient()
{
    client = enet_host_create(NULL, 1, 2, 0, 0);
    return client != nullptr;
}

void SendPacket(string message)
{
    const char* msg = message.c_str();
    ENetPacket* packet = enet_packet_create(msg, strlen(msg) + 1, ENET_PACKET_FLAG_RELIABLE);
    enet_peer_send(peer, 0, packet);
    enet_host_flush(client);
}

void GetInput()
{

    while (!quitChat)
    {
        // clear console input line and accept user chat input
        cin.clear();
        getline(cin, clientMessage);

        // allow user to exit chat
        if (clientMessage == "/q")
        {
            quitChat = true;
            cout << "Thanks for chatting! Have a nice day :)" << endl;
            return;
        }

        // send the message with user attached
        clientMessage = clientName + ": " + clientMessage;
        SendPacket(clientMessage);
        clientMessage = "";
    }
}