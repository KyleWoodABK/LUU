#include <enet/enet.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

ENetAddress address;
ENetHost* server = nullptr;
ENetEvent event;

constexpr int SERVER_PORT = 1234;

constexpr auto welcomeChat = "Welcome to the chat! Enter \"/q\" when you are ready to exit.\n";

bool CreateServer();
void SendPacket(string message, bool broadcast);

int main(int argc, char** argv)
{
    if (enet_initialize() != 0)
    {
        cout << "An error occurred while initializing ENet." << endl;
        return EXIT_FAILURE;
    }
    atexit(enet_deinitialize);

    if (!CreateServer())
    {
        cout << "An error occurred while trying to create an ENet server host." << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Server is running!" << endl;

    while (1)
    {
        while (enet_host_service(server, &event, 1000) > 0)
        {
            switch (event.type)
            {
            case ENET_EVENT_TYPE_CONNECT:
            {
                cout << "A new client connected from " << event.peer->address.host << ":" << event.peer->address.port << endl;
                event.peer->data = (void*)("Client information");
                SendPacket(welcomeChat, false);
                break;
            }
            case ENET_EVENT_TYPE_RECEIVE:
            {
                cout << "A packet of length " << event.packet->dataLength << " containing " << (char*)event.packet->data << endl;

                // Broadcast packet to all on server
                SendPacket((char*)event.packet->data, true);

                // Delete packet when done
                enet_packet_destroy(event.packet);
                break;
            }
            case ENET_EVENT_TYPE_DISCONNECT:
                cout << (char*)event.peer->data << " disconnected." << endl;
                event.peer->data = NULL;
            }
        }
    }

    if (server != nullptr) enet_host_destroy(server);

    return EXIT_SUCCESS;
}

bool CreateServer()
{
    // Bind the server to the default `localhost` on port `1234`
    // The host address can be set with `enet_address_set_host(&address, "x.x.x.x");`
    address.host = ENET_HOST_ANY;
    address.port = SERVER_PORT;
    server = enet_host_create(&address, 32, 2, 0, 0);
    return server != nullptr;
}

void SendPacket(string message, bool broadcast)
{
    const char* msg = message.c_str();
    ENetPacket* packet = enet_packet_create(msg, strlen(msg) + 1, ENET_PACKET_FLAG_RELIABLE);

    if (broadcast) enet_host_broadcast(server, 0, packet);
    else enet_peer_send(event.peer, 0, packet);

    enet_host_flush(server);
}