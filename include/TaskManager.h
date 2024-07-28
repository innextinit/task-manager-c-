#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <string>
using namespace std;

class TaskManager {
  private:
    int id;
    string description;
  public:
    static int lastID;
    void run();
    void addTask(const string& description);
    void listTasks();
    void updateTask(const string& id, const string& description);
    void removeTask(const string &id);
};

#endif