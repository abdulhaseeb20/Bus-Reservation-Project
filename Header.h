#include<iostream>
#include<string>
using namespace std;

struct node
{
	string name;
	int cnic;
	string time;
	int noseats = 0;
	int fare = 0;
	int seatnumber;
	string date;
	node* next;
	int username;
	int password;
};
class queue
{
public:
	node** hashArr_P;
	node** hashArr_U;
	int tableSize = 20;

	int totalseats = 50;
	int seat_number = 1;
	node* rear;
	node* front;
	queue()
	{
		rear = front = NULL;
		hashArr_P = new node * [tableSize];
		for (int i = 0; i < tableSize; i++)
		{
			hashArr_P[i] = NULL;
		}
		hashArr_U = new node * [tableSize];
		for (int i = 0; i < tableSize; i++)
		{
			hashArr_U[i] = NULL;
		}

	}
	void Enqueue(string date, string time);
	void Dequeue(int id);
	bool isEmpty();
	void displayQueue();
	bool login();
	void hash_pass(char pass);
	void hash_user(char user);
	int hashFunc_P(char pass);
	int hashFunc_U(char user);

};
void busstatus();