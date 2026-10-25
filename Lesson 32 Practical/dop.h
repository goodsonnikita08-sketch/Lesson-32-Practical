#pragma once
#include <string>

// ================== ЗАДАНИЕ 1 ==================

class Pet {
protected:
    std::string name;
    std::string characteristic;
public:
    Pet(std::string name, std::string characteristic);

    virtual void Sound() const = 0;
    virtual void Type() const = 0;
    void Show() const;

    virtual ~Pet() {}
};

class Dog : public Pet {
public:
    Dog(std::string name, std::string characteristic);
    virtual void Sound() const;
    virtual void Type() const;
};

class Cat : public Pet {
public:
    Cat(std::string name, std::string characteristic);
    virtual void Sound() const;
    virtual void Type() const;
};

class Parrot : public Pet {
public:
    Parrot(std::string name, std::string characteristic);
    virtual void Sound() const;
    virtual void Type() const;
};

class Hamster : public Pet {
public:
    Hamster(std::string name, std::string characteristic);
    virtual void Sound() const;
    virtual void Type() const;
};


// ================== ЗАДАНИЕ 2 ==================

class Employer {
protected:
    std::string name;
    int age;
public:
    Employer(std::string name, int age);

    virtual void Print() const = 0;
    virtual ~Employer() {}
};

class President : public Employer {
public:
    President(std::string name, int age);
    virtual void Print() const;
};

class Manager : public Employer {
private:
    std::string department;
public:
    Manager(std::string name, int age, std::string department);
    virtual void Print() const;
};

class Worker : public Employer {
private:
    std::string tool;
public:
    Worker(std::string name, int age, std::string tool);
    virtual void Print() const;
};