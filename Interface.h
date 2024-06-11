#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
using namespace std;


class Interface
{ 
public:
	static void welcomemessage();
	static void menuoptions();
	static int getUserChoice();
	static void handleUserChoice();
	static void adminMenu();
	static int getAdminChoice();
	static void handleAdminChoice();
	static void clientMenu();
	static int getClientChoice();
	static void handleClientChoice();




};
#endif INTERFACE_H

