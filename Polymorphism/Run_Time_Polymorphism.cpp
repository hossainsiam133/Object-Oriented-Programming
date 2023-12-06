#include <iostream>
using namespace std;

class BaseClass
{
public:
    int a = 10;
    void display()
    {
        cout << "Base class a is: " << a << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int b = 100;
    void display()
    {
        cout << "Base class a is: " << a << endl;
        cout << "Derived class b is: " << b << endl;
    }
};
int main()
{
    DerivedClass obj1;
    obj1.display();
    
    BaseClass base;
    base.display();
    return 0;
}