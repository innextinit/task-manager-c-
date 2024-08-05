#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
protected:
  string username;
  string email;
  string password;
  int access_level;
  static int AccountID;

public:
  Account();
  Account(string username, string email, string password);
  ~Account();

  void UpdateAccount(int ID, string username, string email, string password);
  string GetAccountUsername(int ID) const;
  string GetAccountEmail(int ID) const;
  int GetAccountAccessLevel(int ID) const;

  Account GetAccountDetails(int ID);
  Account GetAccountDetails(string email);
};

#endif