#include <iostream>
using namespace std;

class BaseClass // Base class
{
public:
    int a = 10;
    void display()
    {
        cout << "Base class a is: " << a << endl;
    }
};
// Derived class definition, inheriting publicly from BaseClass
class DerivedClass : public BaseClass
{
public:
    int b = 100; // Public member variable 'b' with an initial value of 100

    // Member function to display the values of 'a' and 'b'
    void display()
    {
        cout << "Derived class a is: " << a << endl;
        cout << "Derived class b is: " << b << endl;
    }
};
int main()
{
    DerivedClass obj1;
    // Calling the display function of the DerivedClass
    obj1.display();
    BaseClass base;
    // Calling the display function of the BaseClass
    base.display();
    return 0;
}
