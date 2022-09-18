// Hubbard_Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void printMenu() {
	cout << "Choose an operation to perform: " << endl;
	cout << "\t1. Factorial " << endl;
	cout << "\t2. Arithemtic " << endl;
	cout << "\t3. Geometric" << endl;
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
	
		
	if (A < 0) {
		cout << "Not a positive number >:( Try again: ";
		cin >> A;
	}
	cout << A << "! = ";
	cout << "1";
	for (n = 2; n <= A; ++n) {
		cout << " * ";
		cout << n;
		factorial *= n;

	}
	cout << " = " << factorial << endl;

}

void arithmetic() {
	int starter;
	int adder;
	int num;
	int i;
	int final_starter = 0;
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> starter;
	cout << "Enter a number to add each time: ";
	cin >> adder;
	cout << "Enter the number of elements in the series: ";
	cin >> num;
	if (num <= 0) {
		cout << "Please print a positive number!: ";
		cin >> num;
	}

		for (i = 1; i < num; i++) {
			cout << starter;
			cout << " + ";
			starter += adder;
			final_starter += starter-adder;
		}

		cout << starter;
		starter += adder;
		final_starter += starter - adder;
		cout << " = " << final_starter << endl;

}


void geometric() {
	int r;
	int a;
	int num;
	int i;
	int final = 0;
	int initial = 0;
	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start with: ";
	cin >> r;
	cout << "Enter a number to multiply by each time: ";
	cin >> a;
	cout << "Enter the number of elements: ";
	cin >> num;

	if (num <= 0) {
		cout << "Please enter a positive number!: ";
		cin >> num;
	}


	for (i = 1; i < num; i++) {
		cout << r;
		cout << " + ";
		r = r * a; 
		final += r / a;
	}

	cout << r;
	r = r * a;
	final += r / a;
	cout << " = " << final << endl;

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

		cout << "Run the program again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');


}
	