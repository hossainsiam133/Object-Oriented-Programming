// Pointers to Creating the Base Class Object...
#include <iostream>
using namespace std;
class Base
{
public:
    int a = 5;

    virtual void display() // Example of runtime polymorphism with the help of virtual method.
    {
        cout << "Base class" << endl;
        cout << "Base class a is " << a << endl;
    }
   
};
class derived : public Base
{
public:
    int b = 100;
    void display()
    {
        cout << "Derived class." << endl;
        cout << "Base class a is " << a << endl;
        cout << "Derived class b is " << b << endl;
    }
};
int main()
{
    Base *base_class_pointer;
    Base obj1;
    derived obj2;

    base_class_pointer = &obj2;
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived_class_pointer = &obj2;
    derived_class_pointer->display();

    obj1.display(); // Runtime polymorphism.
    obj2.display();

    return 0;
}