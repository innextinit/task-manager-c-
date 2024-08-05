#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <string>
using namespace std;

class TaskManager
{
protected:
  static int TaskID;
  string description;
  string due_date;
  string status;
  int UserID;

public:
  TaskManager();
  TaskManager(string description);
  ~TaskManager();

  void listTasks();
  void updateTask(int ID, string description, string due_date, string status);
  void updateDescription(int ID, string description);
  void updateDueDate(int ID, string due_date);
  void updateStatus(int ID, string status);
};

#endif