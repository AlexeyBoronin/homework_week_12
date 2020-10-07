#include <string>
#include <iostream>
#include"Animal.h"  
using namespace std;

int main()
{

    Animal* animals[3] = {
        new Dog("Dog"),
        new Cat("Cat"),
        new Bird("Bird")
    };

    for (int i = 0; i < 3; ++i)
        animals[i]->Say();




    system("pause");
    return 0;
}