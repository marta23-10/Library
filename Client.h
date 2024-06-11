#ifndef CLIENT_H
#define CLIENT_H

#include "User.h"
class Client : public User
{
private:
	string firstname;
	string lastname;
	int age;
	//int fine;
	//int date;
	Client(string ulogin, string upassword, string cfirstname, string clastname);
	void login() override;
	void rent_book();
	void return_book();
	void postpone_return();
	void see_profile();
	void log_out();
	
};


#endif // !CLIENT_H
