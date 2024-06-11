#include "Interface.h"
#include "Client.h"


static void Interface::welcomemessage() {
	cout << "Welcome to the library!" 
};

static void Interface::menuoptions() {
	cout << "1. LOG IN AS CLIENT" << endl;
	cout << "2. LOG IN AS ADMIN" << endl;
	cout << "3. CREATE CLIENT ACCOUNT" << endl;
};

static int Interface:: getUserChoice() {
	int choice;
	cout << "Enter your choice: " << endl;
	cin >> choice;
	return choice;
};

static void Interface::handleUserChoice() {
	switch (choice)
	{
	case 1:
		// function implementing login in
	case 2:
		// as admin
	case 3:
		// creating account
	default:
		cout << "Invalid choice" << endl;
	}
	static void Interface::adminMenu() {
		cout << "1. ADD NEW BOOK" << endl;
		cout << "2. DELETE BOOK" << endl;
		cout << "3. UPDATE BOOK" << endl;
		cout << "4. GENERATE LIST OF RENTED BOOKS" << endl;
		cout << "5. LOG OUT" << endl;
	}
	static int Interface::getAdminChoice() {
		int a_choice;
		cout << "Enter your choice: " << endl;
		cin >> a_choice;
		return a_choice;
	}
	static void Interface::handleAdminChoice() {
		switch (a_choice)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		default:
			cout << "Invalid choice";
		}
	}

	static void Interface::clientMenu() {
		cout << "1. RENT BOOK" << endl;
		cout << "2. RETURN BOOK" << endl;
		cout << "3. POSTPONE RETURN DATE" << endl;
		cout << "4. SEE PROFILE" << endl;
		cout << "5. LOG OUT" << endl;
	}
	static int Interface::getClientChoice() {
		int c_choice;
		cout << "Enter your choice: " << endl;
		cin >> c_choice;
		return c_choice;
	}
	static void Interface::handleClientChoice() {
		switch (c_choice)
		{
		case 1:
			
		case 2:
		case 3:
		case 4:
		case 5:
		default:
			cout << "Invalid choice";
		}
	}








};
