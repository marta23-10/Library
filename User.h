#ifndef USER_H
#define USER_H
#include <string>

class User
{
protected:
	string login;
	string password;
public:
	User(string ulogin, string upassword);
	virtual ~User();
	virtual void login() = 0;

};
#endif // !USER_H


