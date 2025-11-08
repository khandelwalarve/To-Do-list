#ifndef TODO_H
#define TODO_H

#include <vector>
#include <string>

void addTask(std::vector<std::string>& tasks, const std::string& task);
void deleteTask(std::vector<std::string>& tasks, int index);
void showTasks(const std::vector<std::string>& tasks);
void saveTasks(const std::vector<std::string>& tasks, const std::string& filename);
void loadTasks(std::vector<std::string>& tasks, const std::string& filename);

#endif
