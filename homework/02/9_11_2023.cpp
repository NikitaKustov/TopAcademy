#include <iostream> 
#include <map> 
#include <vector> 
 
using namespace std; 
 
enum class Room_Choose { 
    room1, 
    room2, 
    room3, 
    room4, 
    quit 
}; 
 
class Room { 
    map<string, string> login_password; 
public: 
    Room(int n) { 
        cout << "Комната " << n << " открыта" << endl; 
    } 
 
    void make() { 
        cout << "Введите что хотите сделать(1 -зрегаться, 2 - авторизоваться, мужик)))))))))) ?" << endl; 
        int n; 
        cin >> n; 
        switch (n) { 
        case 1: { 
            string login, password; 
            cin >> login >> password; 
            registrate(login, password); 
            break; 
        } 
        case 2: { 
            string login, password; 
            cin >> login >> password; 
            authorise(login, password); 
            break; 
        } 
 
        } 
    } 
 
    void registrate(string login, string password) { 
        if ((login_password[login]) == "") { 
            login_password[login] = password; 
            cout << "Вы успешно зарегестрированы !" << endl; 
        } 
        else { 
            cout << "Такой логин уже есть !" << endl; 
        } 
    } 
 
    void authorise(string login, string password) { 
        if (login_password[login] == password) { 
            cout << "Вы авторизованы !" << endl; 
        } 
        else { 
            cout << "Неверно введены логин или пароль !" << endl; 
        } 
    } 
}; 
 
class Room1 : public Room { 
public: 
    Room1() : Room(1) {} 
}; 
 
class Room2 : public Room { 
public: 
    Room2() : Room(2) {} 
}; 
 
class Room3 : public Room { 
public: 
    Room3() : Room(3) {} 
}; 
 
class Room4 : public Room { 
public: 
    Room4() : Room(4) {} 
}; 
 
Room_Choose get_room() { 
    cout << "Выберете комнату от 1 до 5(5 - выйти)" << endl; 
    Room_Choose RC; 
    int rn; 
    cin >> rn; 
 
    switch (rn) { 
    case 1: 
        RC = Room_Choose::room1; 
        break; 
    case 2: 
        RC = Room_Choose::room2; 
        break; 
    case 3: 
        RC = Room_Choose::room3; 
        break; 
    case 4: 
        RC = Room_Choose::room4; 
        break; 
    default: 
        RC = Room_Choose::quit; 
        break; 
    } 
 
    return RC; 
} 
 
int main() 
{ 
    setlocale(LC_ALL, ""); 
    Room1 r1; 
    Room2 r2; 
    Room3 r3; 
    Room4 r4; 
    while (true) { 
        switch (get_room()) { 
        case Room_Choose::room1: { 
            r1.make(); 
            break; 
        } 
        case Room_Choose::room2: { 
            r2.make(); 
            break; 
        } 
 
        case Room_Choose::room3: { 
            r3.make(); 
            break; 
        } 
 
        case Room_Choose::room4: { 
            r4.make(); 
            break; 
        } 
 
        default: 
            return 0; 
        } 
    } 
}