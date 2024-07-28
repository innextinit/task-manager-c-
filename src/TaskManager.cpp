#include <iostream>
using namespace std;

#include "TaskManager.h"

int TaskManager::lastID = 1;

void TaskManager::run() {
    string command;

    while (true) {
        cout << "NOTE: This would only work for one task now" << endl;
        cout << "Enter a command (add, list, quit): ";
        cin >> command;
        
        if (command == "add") {
            string task;
            cout << "Enter task description: ";
            cin.ignore();
            
            getline(cin, task);
            addTask(task);
        } else if (command == "list") {
            listTasks();
        } else if (command == "quit") {
            break;
        } else {
            cout << "Unknown command. Please try again.\n";
        }
    }
}

void TaskManager::addTask(const string& description) {
    // this should be going to a DB or something
    this->description = description;
    this->id = lastID;

    cout << "Last ID" << lastID << endl;

    lastID++;
}

void TaskManager::listTasks() {
    // this should be coming from a DB or something
    cout << "Tasks:\n";
    
    cout << "ID - " << id << "\n";
    cout << "Description - " << description << "\n";
}
