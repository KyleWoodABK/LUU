#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <random>
#include <condition_variable>
#include <string>

using namespace std;
​
mutex g_honeyMutex;
std::condition_variable g_honeyFull, g_honeyEmpty;
bool g_honeyContainer;
​
void ProduceHoney();
void FarmHoney();
void Farmer();
void Beehive();
​
int main()
{
	thread hive1(Beehive);
	thread hive2(Beehive);
	thread hive3(Beehive);
	thread hive4(Beehive);
	thread farmer(Farmer);
	​
	hive1.join();
	hive2.join();
	hive3.join();
	hive4.join();
	farmer.join();
	​
	return 0;
}
​
void ProduceHoney()
{
	g_honeyContainer = true;
	cout << "Beehive produced honey" << endl;
}
​
void FarmHoney()
{
	g_honeyContainer = false;
	cout << "Farmer retrieved honey" << endl;
}
​
void Farmer()
{
	while (true)
	{
		unique_lock<mutex> lk(g_honeyMutex);
		g_honeyFull.wait(lk, []() { return g_honeyContainer; });
		FarmHoney();
		lk.unlock();
		g_honeyEmpty.notify_one();
	}
}
​
void Beehive()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::minstd_rand0 generator(seed);
	​
		while (true)
		{
			// wait for honey
			int waitTime = (generator() % 10) + 5;
			this_thread::sleep_for(chrono::seconds(waitTime));
			​
				unique_lock<mutex> lk(g_honeyMutex);
			g_honeyEmpty.wait(lk, []() { return !g_honeyContainer; });
			ProduceHoney();
			lk.unlock();
			g_honeyFull.notify_all();
		}
}