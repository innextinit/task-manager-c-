#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

#include "Account.h"
#include "Person.h"

class User
{
protected:
  Person person;
  Account account;
  static int UserID;

public:
  User();
  User(string first_name, string last_name, string username, string email, string password);
  ~User();

  User GetUserDetails(int ID) const;
  User Login(string email, string password) const;
  void Logout(int ID);
  void printDetails(User const user) const;
};

#endif