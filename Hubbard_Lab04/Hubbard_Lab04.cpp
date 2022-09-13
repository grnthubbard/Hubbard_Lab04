// Hubbard_Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu() {
	cout << "Choose an operation to perform: " << endl;
	cout << "\t1. Factorial " << endl;
	cout << "\t2. Arithemtic " << endl;
	cout << "\t3. Geometry" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Choice: ";
}


void factorial() {
	int A;
	int n;
	int factorial = 1;

	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> A;
	do {
		if (A < 0) {
			cout << "Not a positive number >:( Try again: ";
			cin >> A;
		}
		else if (A == 0) {
			cout << "0! = 1" << endl;
		}
		else {
			cout << A << "! = ";
			cout << "1";
			for (n = 2; n <= A; ++n) {
				cout << " * ";
				cout << n;
				factorial *= n;
				
			}
			cout << " = " << factorial << endl;
		}
	} while (A < 0);

}

void arithmetic() {

}

void geometric() {

}




int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}

		else if (choice == 1) {
			factorial();
		}

		else if (choice == 2) {
			arithmetic();
		}

		else if (choice == 3) {
			geometric();
		}

		cout << "Run the program again? Type \"Y\" to continue. ";
		cin >> again;

	} while (again == 'y' || again == 'Y');


}
	