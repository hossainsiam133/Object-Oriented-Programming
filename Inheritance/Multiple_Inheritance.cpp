#include <iostream>
using namespace std;
// Class A with a public member variable 'a' and two display functions
class A
{
public:
    int a = 10;
    void display()
    {
        cout << "The Number: " << a << endl;
    }
    void display1()
    {
        cout << "The Addition of " << a << " and " << a << " is: " << a + a << endl;
    }
};
// Class B with a public member variable 'b' and two display functions
class B
{
public:
    int b = 20;
    void display()
    {
        cout << "The Number: " << b << endl;
    }
    void display2()
    {
        cout << "The Addition of " << b << " and " << b << " is: " << b + b << endl;
    }
};
// Class C inherits publicly from both classes A and B
class C : public A, public B
{
};
int main()
{
    A a1;
    B b1;
    C obj1;
    a1.display();
    obj1.display1();

    b1.display();
    obj1.display2();
    // Uncommenting the following line will result in an error due to ambiguity
    // obj1.display();
    return 0;
}
