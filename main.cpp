#include<iostream>
#include<string>
#include"Header.h"
#include<Windows.h>
#include<stdlib.h>
using namespace std;                                                       //q[0] lahore to faisalabad
																		   //q[1] faisalabad to lahore
																		   //q[2] islamabad to lahore     
																		   //q[3] lahore to islamabad
																		   //q[4] islamabad to faisalabad
																		  //q[5] faisalabad to islamabad
int main()
{
	cout << "__________________________________________________\n";
	cout << "\n***B U S   R E S E R V A T I O N   S Y S T E M***\n";
	cout << "__________________________________________________\n"<<endl;
	queue q[6];
	queue obj;
	int ch0, ch4;
	if (obj.login() == true) {
		cout << "\tLogin Successful!!" << endl;
		bool flag = true;
		int ch;
		Sleep(1500);
		system("CLS");
		while (flag == true)
		{
			cout << "__________________________________________________\n";
			cout << "\n***B U S   R E S E R V A T I O N   S Y S T E M***\n";
			cout << "__________________________________________________\n" << endl;
			cout << "\nEnter 1 for Ticket Booking\n";
			cout << "Enter 2 for Cancel Booking\n";
			cout << "Enter 3 to view Bus Status\n";
			cout << "Enter 4 to Exit\n";
			cout << endl << "Enter: ";
			cin >> ch;
			switch (ch)
			{
			case 1:
			{
				int ch1, ch2, ch3;
				string date, time;
				cout << "Please select the Departure City: ";
				cout << "\n1 for Lahore\n2 for Islamabad\n3 for Faisalabad\n";
				cin >> ch1;
				cout << "Please select the Arrival City: ";
				cout << "\n1 for Lahore\n2 for Islamabad\n3 for Faisalabad\n";
				cin >> ch2;
				switch (ch1)
				{
				case 1:
					switch (ch2)
					{
					case 3:
						cout << "Lahore to Faisalabad\n ";
						cout << "Please enter the Date\n";
						cin.ignore();
						getline(cin, date);
						cout << "1. LHR-FSD\t\t\t7:00 am.\n";
						cout << "2. LHR-FSD\t\t\t12:00 pm.\n";
						cout << "3. LHR-FSD\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[0].Enqueue(date, time);

						break;
					case 2:
						cout << "Lahore to Islamabad\n ";
						cout << "Please enter the Date\n";
						cin.ignore();
						getline(cin, date);
						cout << "1. LHR-ISB\t\t\t7:00 am.\n";
						cout << "2. LHR-ISB\t\t\t12:00 pm.\n";
						cout << "3. LHR-ISB\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[3].Enqueue(date, time);
						break;
					}
					break;
				case 2:
					switch (ch2)
					{
					case 1:
						cout << "Islamabad to Lahore\n ";
						cout << "Please enter the date\n";
						cin.ignore();
						getline(cin, date);
						cout << "1. ISB-LHR\t\t\t7:00 am.\n";
						cout << "2. ISB-LHR\t\t\t12:00 pm.\n";
						cout << "3. ISB-LHR\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[2].Enqueue(date, time);
						break;
					case 3:
						cout << "Islamabad to Faisalabad\n ";
						cout << "Please enter the Date\n";
						cin >> date;
						cin.ignore();
						getline(cin, date);
						cout << "1. ISB-FSD\t\t\t7:00 am.\n";
						cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
						cout << "3. ISB-FSD\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[4].Enqueue(date, time);
						break;
					}
					break;

				case 3:
					switch (ch2)
					{
					case 1:
						cout << "Faisalabad to Lahore\n ";
						cout << "Please enter the Date\n";
						cin.ignore();
						getline(cin, date);
						cout << "1. ISB-FSD\t\t\t7:00 am.\n";
						cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
						cout << "3. ISB-FSD\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[1].Enqueue(date, time);
						break;
					case 2:
						cout << "Faisalabad to Islamabad\n ";
						cout << "Please enter the Date\n";
						cin.ignore();
						getline(cin, date);
						cout << "1. ISB-FSD\t\t\t7:00 am.\n";
						cout << "2. ISB-FSD\t\t\t12:00 pm.\n";
						cout << "3. ISB-FSD\t\t\t9:00 pm.\n";
						cout << "\nSELECT TIME: ";
						cin >> ch3;
						if (ch3 == 1) {
							time = "7:00 am";
						}
						else if (ch3 == 2) {
							time = "12:00 pm";
						}
						else if (ch3 == 3) {
							time = "9:00 pm";
						}
						q[5].Enqueue(date, time);
						break;
					}
					break;
				default: cout << "Please enter the valid input!!\n";
				}
			}break;
			case 2: {
				int id;
				cout << "\nEnter CNIC to delete\n";
				cin >> id;
				cout << "\nPlease select route\n";
				cout << "Enter 1 for lahore to Faisalabad\n";
				cout << "Enter 2 for Faisalabad to Lahore\n";
				cout << "Enter 3 for Islamabad to Lahore\n";
				cout << "Enter 4 for Lahore to Islamabad\n";
				cout << "Enter 5 for Islamabad to Faisalabad\n";
				cout << "Enter 6 for Faisalabad to Islamabad\n";
				cin >> ch4;
				if (ch4 == 1) {
					q[0].Dequeue(id);
				}
				else if (ch4 == 2) {
					q[1].Dequeue(id);
				}
				else if (ch4 == 3) {
					q[2].Dequeue(id);
				}
				else if (ch4 == 4) {
					q[3].Dequeue(id);
				}
				else if (ch4 == 5) {
					q[4].Dequeue(id);
				}
				else if (ch4 == 6) {
					q[5].Dequeue(id);
				}

			}break;
			case 3:
				busstatus();
				break;
			case 4:
			{flag = false; }break;
			default: cout << "\nPlease enter valid input!!\n";
				flag = false;
			}

			cout << "\nEnter 1 for stay \n";
			cin >> ch0;
			if (ch0 == 1) {
				flag = true;
			}
			else flag = false;
		}
	}
	else cout << "\nUsername or Password is not correct\n";

	system("pause");
	return 0;
}