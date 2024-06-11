#include "Admin.h"
#include <string>
using namespace std;

Admin:: Admin(string ulogin, string upassword, int id)
	: User(ulogin, upassword), admin_id(id) {}
void Admin::login() override
void Admin::add_new_book()
void Admin::delete_book()
void Admin::update_book()
void Admin::generate_list()
void Admin::log_out()
