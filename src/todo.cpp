#include "../include/todo.h"
#include <iostream>
#include <fstream>

void addTask(std::vector<std::string>& tasks, const std::string& task) {
    tasks.push_back(task);
}

void deleteTask(std::vector<std::string>& tasks, int index) {
    if(index>=0 && index<tasks.size()){
        tasks.erase(tasks.begin()+index);
    }
    else{
        std::cerr << "Invald index" << "\n";
    }
}       

void showTasks(const std::vector<std::string>& tasks) {
    if(tasks.empty()){
        std::cerr<<"No Tasks yet."<<"\n";
    }
    std::cout << "\n--- To-Do List ---\n";
    for(int i=0;i<tasks.size();i++){
        std::cout<<i+1<<"."<<" "<<tasks[i]<<"\n";
    }
    std::cout << "------------------\n";
}

void saveTasks(const std::vector<std::string>& tasks, const std::string& filename) {
    std::ofstream file(filename, std::ios::app);

    if (!file) {
        std::cerr << "Error: Could not open file for saving: " << filename << "\n";
        return;
    }

    for (auto& task : tasks) file << task << "\n";
    file.close();
}
    
void loadTasks(std::vector<std::string>& tasks, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (getline(file, line)) tasks.push_back(line);
    file.close();
}
