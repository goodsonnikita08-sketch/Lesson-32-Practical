#include "dop.h"
#include <iostream>

// ================== ЗАДАНИЕ 1 ==================

Pet::Pet(std::string name, std::string characteristic) : name(name), characteristic(characteristic) {}

void Pet::Show() const {
    std::cout << "Имя: " << name << '\n';
}

Dog::Dog(std::string name, std::string characteristic) : Pet(name, characteristic) {}
void Dog::Sound() const {
    std::cout << "Звук: Гав-гав!\n";
}
void Dog::Type() const {
    std::cout << "Подвид: Собака (" << characteristic << ")\n";
}

Cat::Cat(std::string name, std::string characteristic) : Pet(name, characteristic) {}
void Cat::Sound() const {
    std::cout << "Звук: Мяу-мяу!\n";
}
void Cat::Type() const {
    std::cout << "Подвид: Кошка (" << characteristic << ")\n";
}

Parrot::Parrot(std::string name, std::string characteristic) : Pet(name, characteristic) {}
void Parrot::Sound() const {
    std::cout << "Звук: Кеша хороший!\n";
}
void Parrot::Type() const {
    std::cout << "Подвид: Попугай (" << characteristic << ")\n";
}

Hamster::Hamster(std::string name, std::string characteristic) : Pet(name, characteristic) {}
void Hamster::Sound() const {
    std::cout << "Звук: *шуршит в колесе*\n";
}
void Hamster::Type() const {
    std::cout << "Подвид: Хомяк (" << characteristic << ")\n";
}


// ================== ЗАДАНИЕ 2 ==================

Employer::Employer(std::string name, int age) : name(name), age(age) {}

President::President(std::string name, int age) : Employer(name, age) {}
void President::Print() const {
    std::cout << "[Президент] Имя: " << name << ", Возраст: " << age
        << ". Управляет всей компанией.\n";
}

Manager::Manager(std::string name, int age, std::string department) : Employer(name, age), department(department) {}
void Manager::Print() const {
    std::cout << "[Менеджер] Имя: " << name << ", Возраст: " << age
        << ". Управляет отделом: " << department << ".\n";
}

Worker::Worker(std::string name, int age, std::string tool) : Employer(name, age), tool(tool) {}
void Worker::Print() const {
    std::cout << "[Рабочий] Имя: " << name << ", Возраст: " << age
        << ". Работает с инструментом: " << tool << ".\n";
}