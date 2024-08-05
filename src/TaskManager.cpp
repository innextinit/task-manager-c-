#include <iostream>
using namespace std;

#include "TaskManager.h"
#include "ToLowerString.h"

int TaskManager::TaskID = 1;

TaskManager::TaskManager(string description)
{
  // this should be going to a DB or something
  this->description = description;
  this->TaskID = TaskID;

  TaskID++;
}

TaskManager::~TaskManager()
{
  cout << "Destructor for Task Manager" << endl;
}

void TaskManager::updateTask(int ID, string description, string due_date, string status)
{
  // this should be going to a DB or something
  updateDescription(ID, description);
  updateDueDate(ID, due_date);
  updateStatus(ID, status);
}

void TaskManager::updateDescription(int ID, string description)
{
  if (ID)
  {
    this->description = description;
  }
};

void TaskManager::updateDueDate(int ID, string due_date)
{
  if (ID)
  {
    this->due_date = due_date;
  }
};

void TaskManager::updateStatus(int ID, string status)
{
  if (ID)
  {
    if (toLowerString(status) == "todo" || "ongoing" || "done")
    {
      this->status = status;
    }
  }
};

void TaskManager::listTasks()
{
  // this should be coming from a DB or something
  cout << "Tasks:\n";

  cout << "ID - " << TaskID << "\n";
  cout << "Description - " << description << "\n";
  cout << "Due Date - " << due_date << "\n";
  cout << "Status - " << status << "\n";
}
