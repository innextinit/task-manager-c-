#include <iostream>
using namespace std;

#include "Account.h"

int Account::AccountID = 1;

Account::Account(string first_name, string last_name, string username, string email, string password) : Person(first_name, last_name)
{
  this->username = username;
  this->email = email;
  this->password = password; // TODO: encrypt password
  this->access_level = 1;
  this->AccountID = AccountID;
  // add the person ID from Person to this Account

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

Account Account::GetAccountByEmail(string email)
{
  // connect to the DB or something to find the email, if user found then update
  return *this;
};