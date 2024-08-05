#ifndef TO_LOWER_STRING_H
#define TO_LOWER_STRING_H

#include <iostream>
#include <cctype>
using namespace std;

string toLowerString(const string &str)
{
  string result = str;

  for (char &c : result)
    c = tolower(c);

  return result;
}

#endif