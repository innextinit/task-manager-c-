#include <iostream>
using namespace std;

#include "Person.h"

int Person::PersonID = 1;

Person::Person(string first_name, string last_name)
{
  this->first_name = first_name;
  this->last_name = last_name;
  this->PersonID = PersonID;

  PersonID++;
}

Person::~Person()
{
  cout << "Destructor for Person" << endl;
}

void Person::UpdatePerson(int ID, string first_name, string last_name)
{
  // connect to the DB or something to find the ID, if user found then update
  if (ID)
  {
    this->first_name = first_name;
    this->last_name = last_name;
  }
  else
  {
    cout << "Person not found" << endl;
  }
}

void Person::UpdateFirstName(int ID, string first_name)
{
  // connect to the DB or something to find the ID, if user found then update
  if (ID)
  {
    this->first_name = first_name;
  }
  else
  {
    cout << "Person not found" << endl;
  }
};

void Person::UpdateLastName(int ID, string last_name)
{
  // connect to the DB or something to find the ID, if user found then update
  if (ID)
  {
    this->last_name = last_name;
  }
  else
  {
    cout << "Person not found" << endl;
  }
};

string Person::GetFirstName(int ID) const
{
  return first_name;
};

string Person::GetLastName(int ID) const
{
  return last_name;
};