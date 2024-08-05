#include <iostream>
using namespace std;

#include "User.h"
#include "Account.h"
#include "Person.h"
#include "TaskManager.h"
#include "ToLowerString.h"

TaskManager task;

void run()
{
  string command;

  while (true)
  {
    cout << "Enter a command (login, create, quit): ";
    cin >> command;

    string commandLowerCase = toLowerString(command);

    if (commandLowerCase == "login")
    {
      string email;
      string password;

      cout << "NOTE: Login not working yet";
      cout << "Enter email address: ";
      cin.ignore();
      getline(cin, email);

      cout << "Enter password: ";
      cin.ignore();
      getline(cin, password);

      // TODO: this feels wrong
      // User user.Login(email, password);
    }
    else if (commandLowerCase == "create")
    {
      string first_name, last_name, username, email, password;

      cout << "Enter first name: ";
      cin.ignore();
      getline(cin, first_name);

      cout << "Enter last name: ";
      cin.ignore();
      getline(cin, last_name);

      cout << "Enter username: ";
      cin.ignore();
      getline(cin, username);

      // TODO: check email does not exist first
      cout << "Enter email: ";
      cin.ignore();
      getline(cin, email);

      // TODO: encrypt password
      cout << "Enter password: ";
      cin.ignore();
      getline(cin, password);

      User user(first_name, last_name, username, email, password);

      loggedInActions(user);
    }
    else if (commandLowerCase == "quit")
    {
      break;
    }
    else
    {
      cout << "Invalid command. Please try again." << endl;
    }
  }
}

void loggedInActions(User user)
{
  while (true)
  {
    string command;
    cout << "Enter a command (user, task, logout): ";
    cin >> command;
    cin.ignore();

    string commandLowerCase = toLowerString(command);

    if (commandLowerCase == "user")
    {
      manageUser(user);
    }
    else if (commandLowerCase == "task")
    {
      managerTask(user);
    }
    else if (commandLowerCase == "logout")
    {
      break;
    }
    else
    {
      cout << "Invalid command. Please try again." << endl;
    }
  }
}

void manageUser(User user)
{
  string command;

  while (true)
  {
    cout << "Enter a command to manage user (person, firstname, lastname, back): ";
    cin >> command;

    string commandLowerCase = toLowerString(command);

    if (commandLowerCase == "person")
    {
      string first_name, last_name;

      cout << "Enter the person's first name: ";
      cin.ignore();
      getline(cin, first_name);

      cout << "Enter the person's last name: ";
      cin.ignore();
      getline(cin, last_name);

      // user.person.UpdatePerson(user.UserID, first_name, last_name);
    }
    else if (commandLowerCase == "firstname")
    {
      string first_name;

      cout << "Enter the person's first name: ";
      cin.ignore();
      getline(cin, first_name);

      // user.person.UpdateFirstName(user.UserID, first_name);
    }
    else if (commandLowerCase == "lastname")
    {
      string last_name;

      cout << "Enter the person's last name: ";
      cin.ignore();
      getline(cin, last_name);

      // user.person.UpdateLastName(user.UserID, last_name);
    }
    else if (commandLowerCase == "back")
    {
      run();
    }
    else
    {
      cout << "Invalid command. Please try again." << endl;
    }
  }
}

void managerTask(User user)
{
  string command;

  while (true)
  {
    cout << "Enter a command to manage task (add, list, update, status, back): ";
    cin >> command;

    string commandLowerCase = toLowerString(command);

    if (commandLowerCase == "add")
    {
      string description;

      cout << "Enter the task description: ";
      cin.ignore();
      getline(cin, description);

      new TaskManager(description);
    }
    else if (commandLowerCase == "update")
    {
      string description, due_date, status;

      cout << "Enter the task description: ";
      cin.ignore();
      getline(cin, description);

      cout << "Enter the task description: ";
      cin.ignore();
      getline(cin, due_date);

      cout << "Enter the task description: ";
      cin.ignore();
      getline(cin, status);

      // task.updateTask(user.UserID description, due_date, toLowerString(status));
    }
    else if (commandLowerCase == "status")
    {
      string status;

      cout << "Enter the person's last name: ";
      cin.ignore();
      getline(cin, status);

      // task.updateStatus(user.UserID, toLowerString(status));
    }
    else if (commandLowerCase == "list")
    {
      task.listTasks();
    }
    else if (commandLowerCase == "back")
    {
      run();
    }
    else
    {
      cout << "Invalid command. Please try again." << endl;
    }
  }
}