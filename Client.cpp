#include "Client.h"
using namespace std;

Client:: Client(string ulogin, string upassword, string cfirstname, string clastname)
	: User(ulogin, upassword), firstname(cfirstname), lastname(clastname) {}

void Client::login() override
void Client::rent_book()
void Client::return_book()
void Client::postpone_return()
void Client::see_profile()
void Client::log_out() 