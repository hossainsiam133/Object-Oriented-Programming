#include <iostream>
using namespace std;
// Base Class - 01
class Animal  
{
public:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};
// Base Class - 02
class Mammal  
{
public:
    void giveBirth()
    {
        cout << "Mammal is giving birth." << endl;
    }
};
// Sub Class - 01
class Dog : public Animal  
{
public:
    void bark()
    {
        cout << "Dog is barking." << endl;
    }
};
// Sub Class - 02
class Bat : public Mammal, public Dog  
{
public:
    void fly()
    {
        cout << "Bat is flying." << endl;
    }
};
int main()
{
    // Create object of the classes
    Dog myDog;
    Bat myBat;
    // Access methods from the Dog class
    myDog.eat();
    myDog.bark();
    // Access methods from both Animal and Mammal classes through the Bat class
    myBat.eat();  
    myBat.giveBirth();
    myBat.fly();

    return 0;
}
