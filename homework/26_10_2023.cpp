#include <iostream>
#include <string>
#include <cstring>
using namespace std;

union Number {
    int number;
    char word[8];
};

struct Car {
    string color;
    string model;
    Number number;
};

void FillCar(Car& car) {
    cout << "Enter the color: ";
    cin >> car.color;
    cout << "Enter the model: ";
    cin >> car.model;
    cout << "Enter the number (5-digit number or word up to 8 characters): ";
    cin >> car.number.word;
}

void PrintCar(const Car& car) {
    cout << "Color: " << car.color << endl;
    cout << "Model: " << car.model << endl;
    cout << "Number: ";
    if (isdigit(car.number.word[0])) {
        cout << car.number.number;
    } else {
        cout << car.number.word;
    }
    cout << endl;
}

void EditCar(Car& car) {
    cout << "Enter the new color: ";
    cin >> car.color;
    cout << "Enter the new model: ";
    cin >> car.model;
    cout << "Enter the new number (5-digit number or word up to 8 characters): ";
    cin >> car.number.word;
}

void PrintAllCars(const Car cars[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Car #" << i + 1 << endl;
        PrintCar(cars[i]);
        cout << endl;
    }
}

void SearchCarByNumber(const Car cars[], int size, const Number& number) {
    for (int i = 0; i < size; i++) {
        if (isdigit(number.word[0])) {
            if (cars[i].number.number == number.number) {
                cout << "Car #" << i + 1 << endl;
                PrintCar(cars[i]);
                return;
            }
        } else {
            if (strcmp(cars[i].number.word, number.word) == 0) {
                cout << "Car #" << i + 1 << endl;
                PrintCar(cars[i]);
                return;
            }
        }
    }
    
    cout << "Car not found." << endl;
}

int main() {
    const int size = 10;
    Car cars[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter the details of car #" << i + 1 << endl;
        FillCar(cars[i]);
        cout << endl;
    }
    
    cout << "All cars:" << endl;
    PrintAllCars(cars, size);
    
    cout << "Enter the number of the car you want to edit: ";
    int index;
    cin >> index;
    
    if (index >= 1 && index <= size) {
        cout << endl << "Editing car #" << index << endl;
        EditCar(cars[index - 1]);
        
        cout << endl << "Updated car #" << index << endl;
        PrintCar(cars[index - 1]);
    } else {
        cout << "Invalid car number." << endl;
    }
    
    cout << "Enter the number of the car you want to search: ";
    cin >> index;
    
    if (index >= 1 && index <= size) {
        cout << endl << "Searching car #" << index << endl;
        SearchCarByNumber(cars, size, cars[index - 1].number);
    } else {
        cout << "Invalid car number." << endl;
    }
    
    return 0;
}