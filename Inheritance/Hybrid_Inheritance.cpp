#include <iostream>
using namespace std;

class Animal  // Base Class - 01
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

class Mammal  // Base Class - 02
{
public:
    void giveBirth()
    {
        cout << "Mammal is giving birth." << endl;
    }
};

class Dog : public Animal  // Sub Class - 01
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};

class Bat : public Mammal, public Dog  // Sub Class - 02
{
public:
    void fly()
    {
        cout << "Bat is flying." << endl;
    }
};

int main()
{
    Dog myDog;
    Bat myBat;

    myDog.eat();
    myDog.bark();

    myBat.eat();  
    myBat.giveBirth();
    myBat.fly();

    return 0;
}
