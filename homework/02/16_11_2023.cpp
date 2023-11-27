#include <iostream>
#include <algorithm>
#include <vector>
#include <initializer_list>
#include <unordered_set>
#include <mutex>
#include <thread>

using namespace std;

enum class Modules {
 Light,
 Temperature,
 Safety,
 MDM
};

class Light {
private:
 vector<pair<int, bool>> schedule;
 bool turned_on = false;
 int light_power = 20;
public:
 Light() {
  cout << "Датчик освещения подключен !" << endl;
 }

 bool turn() {
  turned_on = !turned_on;
  return turned_on;
 }

 void set_light_power(int light_power) {
  this->light_power = light_power;
 }

 int get_light_power() const {
  return light_power;
 }

 void dialog() {
  cout << "Выберете 1 - 3" << endl;
  int choise;
  cin >> choise;

  if (choise == 1) {
   cout << (turn() ? "Включён" : "Выключен");
  }
  else if (choise == 2) {
   cout << get_light_power() << endl;
  }
  else if (choise == 3) {
   int take;
   cin >> take;

   set_light_power(take);
  }
 }
};

class Temperature {
private:
 int breath = 0;
 vector<pair<int, int>> shedule;
public:
 Temperature() {
  cout << "Датчик температуры подключен !" << endl;
 }

 int get_breath() const {
  return breath;
 }

 void set_breath(int breath) {
  this->breath = breath;
 }
};

class Safety {
private:
 bool turned = false;
 int wanted_to_open = 0;
 string password;
public:
 Safety(string password) {
  this->password = password;
  cout << "Датчик тепературы подключен !, пароль установлен" << endl;
 }

 int get_wanted() const {
  return wanted_to_open;
 }

 bool open(string password) {
  return this->password == password;
 }
};

class MDM {
private:
 unordered_set<string> things;
public:
 void set_thing(string thing) {
  things.insert(thing);
 }

 void del_thing(string thing) {
  things.erase(thing);
 }

 unordered_set<string> get_things() const {
  return things;
 }

};

class Room {
protected:
 vector<Modules> modules;
public:
 Room(initializer_list<Modules> inlist) {
  for (auto i : inlist) {
   modules.push_back(i);
  }
 }

 void add_module(Modules md) {
  modules.push_back(md);
 }

 void print() {
  for (auto i : modules) {
   switch (i) {
   case Modules::Light:
    cout << "Модуль света" << endl;
    break;

   case Modules::Temperature:
    cout << "Модуль температуры" << endl;
    break;

   case Modules::Safety:
    cout << "Модуль безопасности" << endl;

   default:
    cout << "Модуль мультимедиа" << endl;

   }
  }
 }

 

 Room() {}
};

class Home : Room {
private:
 vector<Room> rooms;
public:
 Home() {
  cout << "Добро пожаловать в наш умный дом !" << endl;
 }
 
 void add(Room rm) {
  rooms.push_back(rm);
 }

 void get() {
  for (int i = 1; i <= rooms.size(); i++) {
   cout << "Комната номер " << i << ": \n";
   rooms[i - 1].print();
  }
 }

 

};

int main()
{
 setlocale(LC_ALL, "");
 Home smarthome;

 cout << "Добро пожаловать введите желаемые комнаты(колличество): " << endl;
 int rooms_count;
 cin >> rooms_count;

 for (int i = 1; i <= rooms_count; i++) {
  Room rm;
  cout << "Итак, " << i << " комната, введите их колличество" << endl;
  int t;
  cin >> t;

  for (int j = 0; j < t; j++) {
   cout << "Введите номера модулей: от 1 до 4" << endl;
   int number;
   cin >> number;

   switch (number) {
   case 1:
    rm.add_module(Modules::Light);
    break;
   case 2:
    rm.add_module(Modules::Temperature);
    break;
   case 3:
    rm.add_module(Modules::Safety);
    break;

   default:
    rm.add_module(Modules::MDM);
    break;
   }
  }

  smarthome.add(rm);
 }

 while (true) {

  cout << "1)Посмотреть всё\n2)Выйти\n3)Войти в комнату" << endl;
  int choise;
  cin >> choise;

  switch (choise) {
  case 1:
   smarthome.get();
   break;

  case 2:
   cout << "Выходим\n";
   exit(0);

  case 3:
   cout << "Введите номер комнаты:" << endl;
   int room;
   cin >> room;

   
  }
 }
    
}