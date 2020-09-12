// ReportCard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void intro();
void result();
void entry_menu();

int main()
{
	char ch;
	cout.setf(ios::fixed | ios::showpoint);
	cout << setprecision(2); // program outputs decimal number to two decimal places

	intro();
	
	do {
		system("cls"); //clears output screen
		cout << "\n\n\n\tmain menu";
		cout << "\n\n\t01. result menu";
		cout << "\n\n\t02. entry/edit menu";
		cout << "\n\n\t03. exit";
		cout << "\n\n\tplease select your option (1-3) ";
		cin >> ch;
		switch (ch)
		{
		case '1': result();
			break;
		case '2': entry_menu();
			break;
		case '3':
			break;
		default:cout << "\a";
		}

	} while (ch!='3');

	return 0;

}

void intro(){
	cout << "\n\n\n\t\t  STUDENT";
	cout << "\n\n\t\tREPORT CARD";
	cout << "\n\n\t\t  PROJECT";
	cout << "\n\n\n\tMADE BY : Max Bulatov";
	cout << "\n\tREFERENCE : http://www.cppforschool.com/project/student-report-card-project.html";
	char c = cin.get();
}

void result() {
	cout << "result" << endl;
}

void entry_menu() {
	char ch;
	int num;
	system("cls");
	cout << "\n\n\n\tENTRY MENU";
	cout << "\n\n\t1.CREATE STUDENT RECORD";
	cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout << "\n\n\t3.SEARCH STUDENT RECORD ";
	cout << "\n\n\t4.MODIFY STUDENT RECORD";
	cout << "\n\n\t5.DELETE STUDENT RECORD";
	cout << "\n\n\t6.BACK TO MAIN MENU";
	cout << "\n\n\tPlease Enter Your Choice (1-6) ";
	cin >> ch;
	system("cls");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
