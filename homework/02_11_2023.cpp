#include <iostream>
#include <fstream>
#include <string>

struct Employee {
    std::string name;
    int age;
    std::string position;
};

void saveDataToFile(const std::string& filename, const Employee& employee) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << employee.name << ", " << employee.age << ", " << employee.position << std::endl;
        file.close();
        std::cout << "Данные сохранены успешно." << std::endl;
    } else {
        std::cerr << "Ошибка при открытии файла." << std::endl;
    }
}

void loadDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Ошибка при открытии файла." << std::endl;
    }
}

int main() {
    std::string filename = "employees.txt";
    loadDataFromFile(filename);
    
    std::cout << "Введите данные о сотруднике (имя, возраст, должность):" << std::endl;
    Employee employee;
    std::getline(std::cin, employee.name);
    std::cin >> employee.age;
    std::cin.ignore();
    std::getline(std::cin, employee.position);
    
    saveDataToFile(filename, employee);
    
    return 0;
}
