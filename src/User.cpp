#include <iostream>
using namespace std;

#include "User.h"
#include "Account.h"
#include "Person.h"

int User::UserID = 1;

User::User(string first_name, string last_name, string username, string email, string password)
{
  this->person = Person(first_name, last_name);
  this->account = Account(username, email, password);
  this->UserID = UserID;
  // add the account ID from Account to this User

  UserID++;
}

User::~User()
{
  cout << "Destructor for User" << endl;
}

User User::GetUserDetails(int ID) const
{
  // connect to the DB or something to find the ID, if user found then update
  return *this;
}

User User::Login(string email, string password) const
{
  // connect to the DB or something to find the email and password, if user found then update
  // Account account = new Account->GetAccountDetails(email);
  // compare password
  return *this;
};

void User::Logout(int ID)
{
  cout << "LOGGED OUT" << endl;
};

void User::printDetails(User const user) const
{
  cout << "User ID: " << user.UserID << endl;
  cout << "First Name: " << user.person.GetFirstName(user.UserID) << endl;
  cout << "Last Name: " << user.person.GetLastName(user.UserID) << endl;
  cout << "Username: " << user.account.GetAccountUsername(user.UserID) << endl;
  cout << "Email: " << user.account.GetAccountEmail(user.UserID) << endl;
}