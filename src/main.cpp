#include <iostream>
using namespace std;

#include "TaskManager.h"

int main()
{
  cout << "Welcome, this a Task Management System" << endl;

  TaskManager taskManager;
  taskManager.run();

  return 0;
}