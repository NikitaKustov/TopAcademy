#include <iostream>
#include <string>

class Employer {
public:
    virtual void Print() = 0;
};

class President : Employer {
public:
    void Print()override {
        std::cout << "I am president"<<std::endl;
    }
};

class Manager : Employer {
public:
    void Print()override {
        std::cout << "I am manager" << std::endl;
    }
};

class Worker : Employer {
public:
    void Print()override {
        std::cout << "I am worker" << std::endl;
    }
};

class Animals {
public:
    virtual void Sound() = 0;
    virtual void Show() = 0;
    virtual void Type() = 0;
};

class Dog : Animals {
private:
    std::string name;
    std::string type;
public:
    Dog(std::string name,std::string type) {
        this->name = name;
        this->type = type;
    }

    void Sound() override {
        std::cout << "Gav-Gav" << std::endl;
    }

    void Show() override {
        std::cout << "Name: "<< name << std::endl;
    }
    
    void Type() override {
        std::cout << "Type: "<< type << std::endl;
    }
};

class Cat : Animals {
private:
    std::string name;
    std::string type;
public:
    Cat(std::string name, std::string type) {
        this->name = name;
        this->type = type;
    }

    void Sound() override {
        std::cout << "Mea-mea" << std::endl;
    }

    void Show() override {
        std::cout << "Name: "<< name << std::endl;
    }

    void Type() override {
        std::cout << "Type: "<< type << std::endl;
    }
};

class Parrot : Animals {
private:
    std::string name;
    std::string type;
public:
    Parrot(std::string name, std::string type) {
        this->name = name;
        this->type = type;
    }

    void Sound() override {
        std::cout << "Kar-kar" << std::endl;
    }

    void Show() override {
        std::cout << "Name: "<< name << std::endl;
    }

    void Type() override {
        std::cout << "Type: "<< type << std::endl;
    }
};

class Hamster : Animals {
private:
    std::string name;
    std::string type;
public:
    Hamster(std::string name, std::string type) {
        this->name = name;
        this->type = type;
    }

    void Sound() override {
        std::cout << "Giv-Giv" << std::endl;
    }

    void Show() override {
        std::cout << "Name: "<< name << std::endl;
    }

    void Type() override {
        std::cout << "Type: "<< type << std::endl;
    }
};

int main()
{
    //1
    President president;
    Manager manager;
    Worker worker;

    president.Print();
    manager.Print();
    worker.Print();
    std::cout << "\n";
    //2
    Dog dog("Sam", "Kayot");
    Cat cat("Maha", "Lynx");
    Parrot parrot("Shot", "Pirate");
    Hamster hamster("Q", "if");

    dog.Show();
    dog.Sound();
    dog.Type();
    std::cout << "\n";

    cat.Show();
    cat.Sound();
    cat.Type();
    std::cout << "\n";

    parrot.Show();
    parrot.Sound();
    parrot.Type();
    std::cout << "\n";

    hamster.Show();
    hamster.Sound();
    hamster.Type();
}