#include <iostream>
using namespace std;

#include "User.h"

int User::UserID = 1;

User::User(string first_name, string last_name, string username, string email, string password) : Account(first_name, last_name, username, email, password)
{
  this->UserID = UserID;
  // add the account ID from Account to this User

  UserID++;
}

User::~User()
{
  cout << "Destructor for User" << endl;
}

User User::GetUserDetails(int ID)
{
  // connect to the DB or something to find the ID, if user found then update
  return *this;
}

User User::Login(string email, string password)
{
  // connect to the DB or something to find the email and password, if user found then update
  Account account = GetAccountByEmail(email);
  // compare password
  return *this;
};

void User::Logout(int ID)
{
  cout << "LOGGED OUT" << endl;
};