#include <iostream>
using namespace std;
class c1
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    // Member function to display the value of 'a' inside c1
    void display()
    {
        cout << "Value of a inside c1: " << a << endl;
    }
    // Friend class declaration for c3
    friend class c3;
};
class c2
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    // Member function to display the value of 'a' inside c2
    void display()
    {
        cout << "Value of a inside c2: " << a << endl;
    }
    // Friend class declaration for c3
    friend class c3;
};
class c3
{
public:
    // Member function to swap the 'a' values between c1 and c2 objects
    void swapc1c2(c1 &o1, c2 &o2)
    {
        int temp = o1.a;
        o1.a = o2.a;
        o2.a = temp;
    }
};
int main()
{
    // Create an object of c1
    c1 obj1;
    obj1.setA(10);
    obj1.display();
    // Create an object of c2
    c2 obj2;
    obj2.setA(30);
    obj2.display();
    // Create an object of c3
    c3 obj3;
    // Call the swapc1c2 function to swap 'a' values between c1 and c2 objects
    obj3.swapc1c2(obj1, obj2);
    cout << "After swap: " << endl;
    // Display the values of 'a' inside c1 and c2 after the swap
    obj1.display();
    obj2.display();
    return 0;
}
