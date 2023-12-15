#include <iostream>
using namespace std;
class Base // Base class definition
{
public:
    int a = 5;
    // Example of runtime polymorphism with the help of virtual method.
    virtual void display()
    {
        cout << "Base class" << endl;
        cout << "Base class a is " << a << endl;
    }
};
class derived : public Base // Derived class definition
{
public:
    int b = 100;
    // Override the display method in the derived class
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
    // Point the base class pointer to the derived class object
    base_class_pointer = &obj2;
    base_class_pointer->display();
    // Declare a pointer to the derived class
    derived *derived_class_pointer;
    // Point the derived class pointer to the derived class object
    derived_class_pointer = &obj2;
    derived_class_pointer->display();

    obj1.display();
    obj2.display();
    return 0;
}
