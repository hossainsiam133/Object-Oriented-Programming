#include <iostream>
using namespace std;

// Define a class named A
class A
{
public:
    int a, b, c, d;
    // Method to display the values of member variables
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
    }
};
int main()
{
    // Create an object of class A named obj1
    A obj1;
    // Initialize values for the member variables of obj1
    obj1.a = 5;
    obj1.b = 6;
    obj1.c = 7;
    obj1.d = obj1.a + obj1.b + obj1.c;
    // Call the display method of obj1 to print the values
    obj1.display();
    // Create another object of class A named obj2
    A obj2;
    // Initialize values for the member variables of obj2
    obj2.a = 50;
    obj2.b = 70;
    obj2.c = 100;
    obj2.d = obj2.a - obj2.b - obj2.c;
    // Call the display method of obj2 to print the values
    obj2.display();
    return 0;
}
