#include "../include/todo.h"
#include <iostream>

int main() {
    std::vector<std::string> tasks;
    std::string filename = "task.txt"; 

    loadTasks(tasks, filename);

    int choice;
    std::string task;

    while (true) {
        std::cout << "\n1. Show Tasks\n";
        std::cout << "2. Add Task\n";
        std::cout << "3. Delete Task\n";
        std::cout << "4. Save & Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore(); 

        if (choice == 1) {
            showTasks(tasks);
        } 
        else if (choice == 2) {
            std::cout << "Enter new task: ";
            std::getline(std::cin, task);
            addTask(tasks, task);
        } 
        else if (choice == 3) {
            showTasks(tasks);
            std::cout << "Enter task number to delete: ";
            int idx;
            std::cin >> idx;
            deleteTask(tasks, idx - 1);
        } 
        else if (choice == 4) {
            saveTasks(tasks, filename);
            std::cout << "Tasks saved. Goodbye!\n";
            break;
        } 
        else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}
