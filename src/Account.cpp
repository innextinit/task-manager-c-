#include <iostream>
using namespace std;

#include "Account.h"
#include "ToLowerString.h"

int Account::AccountID = 1;

Account::Account(string username, string email, string password)
{
  this->username = username;
  this->email = toLowerString(email);
  this->password = password; // TODO: encrypt password
  this->access_level = 1;
  this->AccountID = AccountID;

  AccountID++;
}

Account::~Account()
{
  cout << "Destructor for Account" << endl;
}

void Account::UpdateAccount(int ID, string username, string email, string password)
{
  // connect to the DB or something to find the ID, if user found then update
  if (ID)
  {
    this->username = username;
    this->email = email;
    this->password = password; // TODO: encrypt password
  }
  else
  {
    cout << "Account not found" << endl;
  }
}

Account Account::GetAccountDetails(int ID)
{
  // connect to the DB or something to find the ID, if user found then update
  return *this;
};

Account Account::GetAccountDetails(string email)
{
  // connect to the DB or something to find the email, if user found then update
  return *this;
};

string Account::GetAccountUsername(int ID) const
{
  return username;
};

string Account::GetAccountEmail(int ID) const
{
  return email;
};

int Account::GetAccountAccessLevel(int ID) const
{
  return access_level;
};