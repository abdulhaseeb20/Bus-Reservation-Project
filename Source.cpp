#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

bool queue::login()
{
	char username[5] = { 'a','d','m','i','n' };
	char password[5] = { 'a','d','m','i','n' };
	char user[20]; char pass[20]; int countUser = 0; int countPass = 0;
	cout << "Enter Username (press / to terminate): ";
	for (int i = 0; i < tableSize; i++)
	{
		cin >> user[i];
		if (user[i] == '/')
		{
			user[i] = '\0';
			break;
		}
		countUser++;
	}
	for (int i = 0; i < countUser; i++)
	{
		hash_user(user[i]);
	}
	cout << "Enter password (press / to terminate): ";
	for (int i = 0; i < tableSize; i++)
	{
		cin >> pass[i];
		if (pass[i] == '/')
		{
			pass[i] = '\0';
			break;
		}
		countPass++;
	}
	for (int i = 0; i < countPass; i++)
	{
		hash_pass(pass[i]);
	}

	for (int i = 0; i < tableSize; i++)
	{
		if (pass[i] == password[i] && user[i] == username[i])
			return true;
		else
			return false;
	}

}

void queue::hash_pass(char pass)
{
	int hashValue = hashFunc_P(pass);
	while (hashArr_P[hashValue] != NULL)
	{
		hashValue = (hashValue + 1) % tableSize;
	}
	hashArr_P[hashValue] = new node();
	hashArr_P[hashValue]->password = pass;
}
int queue::hashFunc_P(char pass)
{
	int convert = static_cast<int>(pass);
	return pass % tableSize;
}

void queue::hash_user(char user)
{
	int hashValue = hashFunc_P(user);
	while (hashArr_P[hashValue] != NULL)
	{
		hashValue = (hashValue + 1) % tableSize;
	}
	hashArr_P[hashValue] = new node();
	hashArr_P[hashValue]->username = user;
}
int queue::hashFunc_U(char user)
{
	int convert = static_cast<int>(user);
	return user % tableSize;
}

void queue::Enqueue(string d, string t) {
	if (totalseats > 0) {
		string nam;
		int bill, cn, nos;
		node* newnode = new node;
		newnode->next = NULL;
		newnode->date = d;
		newnode->time = t;
		cout << "\nFARE:   Rs 630/-\n";
		cout << "Enter your name: ";
		cin.ignore();
		getline(cin, nam);
		cout << "\nEnter CNIC: ";
		cin >> cn;
		cout << "\nHow many seats: ";
		cin >> nos;
		newnode->name = nam;
		newnode->cnic = cn;
		newnode->noseats = nos;
		newnode->fare = newnode->fare + nos * 630;
		newnode->seatnumber = seat_number;
		if (front == NULL) {
			front = newnode;
			rear = newnode;
		}
		else {
			rear->next = newnode;
			rear = rear->next;
		}
		seat_number++;
		totalseats--;
		cout << "\nBOOKED SUCCESSFULLY!\n\t\t\t***Booking Details***\n ";
		cout << "Name: " << newnode->name << " Date: " << newnode->date << " Time: " << newnode->time << " Number of seats: " << newnode->noseats << " Your Fare: " << newnode->fare << endl << endl;;
	}
	else cout << "Bus is full!---cannot book ticket----\n";
}

void queue::Dequeue(int id) {

	node* temp = front;
	int c = 1;
	if (front == NULL) {
		cout << "\nList is empty..\n";
	}
	else {
		while (temp != NULL) {
			if (id == temp->cnic) {
				node* del = temp;
				temp = temp->next;
				cout <<"Passenger Name: "<< del->name << "\nYour ticket cancelled sucsessfully!\n";
				delete del;
				del = NULL;
				totalseats++;
				c = 2;
			}
			if (c == 2) {
				break;

			}
			temp = temp->next;

		}

	}
	if (c == 2) {
		cout << "\nticket refuned successfully..\n";
	}
	else cout << "\nPerson not found\n";
}

bool queue::isEmpty() {
	if (front == NULL) {
		cout << "Queue is empty.." << endl;
		return false;
	}
	else {
		cout << "Queue is not empty.." << endl;
		return true;
	}
}


void queue::displayQueue()
{
	node* temp = front;

	while (temp != NULL)
	{
		cout << "Passenger:" << temp->name << "\nCNIC: " << temp->cnic << "\nDate: " << temp->date << "\nTime: " << temp->time;
		temp = temp->next;
		cout << "\n";
	}
	cout << "\n";
}
void busstatus() {
	cout << "Lahore to Faisalabad\n ";

	cout << "1. LHR-FSD\t\t\t7:00 am.\n";
	cout << "2. LHR-FSD\t\t\t12:00 pm.\n";
	cout << "3. LHR-FSD\t\t\t9:00 pm.\n";

	cout << "Lahore to Islamabad\n ";

	cout << "1. LHR-ISB\t\t\t7:00 am.\n";
	cout << "2. LHR-ISB\t\t\t12:00 pm.\n";
	cout << "3. LHR-ISB\t\t\t9:00 pm.\n";

	cout << "Islamabad to Lahore\n ";

	cout << "1. ISB-LHR\t\t\t7:00 am.\n";
	cout << "2. ISB-LHR\t\t\t12:00 pm.\n";
	cout << "3. ISB-LHR\t\t\t9:00 pm.\n";

	cout << "Islamabad to Faisalabad\n ";

	cout << "1. ISB-FSD\t\t\t7:00 am.\n";
	cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
	cout << "3. ISB-FSD\t\t\t9:00 pm.\n";

	cout << "Faisalabad to Lahore\n ";

	cout << "1. ISB-FSD\t\t\t7:00 am.\n";
	cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
	cout << "3. ISB-FSD\t\t\t9:00 pm.\n";

	cout << "Faisalabad to Islamabad\n ";

	cout << "1. ISB-FSD\t\t\t7:00 am.\n";
	cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
	cout << "3. ISB-FSD\t\t\t9:00 pm.\n";

}