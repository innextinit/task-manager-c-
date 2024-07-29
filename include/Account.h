#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

#include "Person.h"

class Account : public Person
{
protected:
  string username;
  string email;
  string password;
  int access_level;
  int PersonID;
  static int AccountID;

public:
  Account(string first_name, string last_name, string username, string email, string password);
  ~Account();

  void UpdateAccount(int ID, string username, string email, string password);
  Account GetAccountDetails(int ID);
  Account GetAccountByEmail(string email);
};

#endif