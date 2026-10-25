#include <iostream>
#include <vector>
#include <Windows.h>
#include "dop.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "========== ЗАДАНИЕ 1 ==========\n\n";

    std::vector<Pet*> pets;
    pets.push_back(new Dog("Бобик", "Сторожевой"));
    pets.push_back(new Cat("Мурзик", "Домашний ленивый"));
    pets.push_back(new Parrot("Кеша", "Волнистый"));
    pets.push_back(new Hamster("Хома", "Джунгарский"));

    for (int i = 0; i < pets.size(); i++) {
        pets[i]->Type();
        pets[i]->Show();
        pets[i]->Sound();
        std::cout << '\n';
    }

    for (int i = 0; i < pets.size(); i++) {
        delete pets[i];
    }


    std::cout << "========== ЗАДАНИЕ 2 ==========\n\n";

    std::vector<Employer*> employers;
    employers.push_back(new President("Александр Иванович", 55));
    employers.push_back(new Manager("Мария", 30, "Отдел продаж"));
    employers.push_back(new Worker("Иван", 40, "Перфоратор"));

    for (int i = 0; i < employers.size(); i++) {
        employers[i]->Print();
        std::cout << '\n';
    }

    for (int i = 0; i < employers.size(); i++) {
        delete employers[i];
    }

    return 0;
}