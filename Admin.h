#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
class Admin : public User
{
private:
	int admin_id;
public:
	Admin(string ulogin, string upassword, int id);
	void login() override;
	void add_new_book();
	void delete_book();
	void update_book();
	void generate_list();
	void log_out();
};

#endif // !ADMIN_H

