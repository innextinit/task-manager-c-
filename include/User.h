#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

#include "Account.h"

class User : public Account
{
protected:
  static int UserID;
  int AccountID;

public:
  User(string first_name, string last_name, string username, string email, string password);
  ~User();

  User GetUserDetails(int ID);

  User Login(string email, string password);
  void Logout(int ID);
};

#endif