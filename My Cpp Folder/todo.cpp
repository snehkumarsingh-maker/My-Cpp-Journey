#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayMenu() {
    cout << "\n=== Simple To Do List ===\n";
    cout << "1. Add a task\n";
    cout << "2. View tasks\n";
    cout << "3. Delete a task\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<string> tasks;
    int choice = 0;
    string task;

    while (choice != 4) {
        displayMenu();
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            cout << "Enter the new task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added successfully.\n";
        } else if (choice == 2) {
            cout << "\nYour Tasks:\n";
            if (tasks.empty()) {
                cout << "No tasks yet. You are all caught up.\n";
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << "\n";
                }
            }
        } else if (choice == 3) {
            int taskNum;
            cout << "Enter the task number to delete: ";
            cin >> taskNum;
            if (taskNum > 0 && taskNum <= tasks.size()) {
                tasks.erase(tasks.begin() + taskNum - 1);
                cout << "Task deleted.\n";
            } else {
                cout << "Invalid task number.\n";
            }
        } else if (choice == 4) {
            cout << "Goodbye.\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;