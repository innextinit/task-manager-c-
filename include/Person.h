#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
protected:
  string first_name;
  string last_name;
  static int PersonID;

public:
  Person();
  Person(string first_name, string last_name);
  ~Person();

  void UpdatePerson(int ID, string first_name, string last_name);
  void UpdateFirstName(int ID, string first_name);
  void UpdateLastName(int ID, string last_name);

  string GetFirstName(int ID) const;
  string GetLastName(int ID) const;
};

#endif