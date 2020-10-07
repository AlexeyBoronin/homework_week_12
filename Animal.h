#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animal
{
protected:
    string name;
public:
    Animal(string name)
        : name(name)
    {
    }

    virtual void Say() = 0;

};

class Dog : public Animal
{
public:
    Dog(string name) : Animal(name)
    {
    }

    void Say() override
    {
        cout << name << " speak gav-gav" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat(string name) : Animal(name)
    {
    }

    void Say() override
    {
        cout << name << " speak may-may" << endl;
    }
};

class Bird : public Animal
{
public:
    Bird(string name) : Animal(name)
    {
    }

    void Say() override
    {
        cout << name << " speak kray-kray" << endl;
    }
};
