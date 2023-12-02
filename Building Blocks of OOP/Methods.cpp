#include <iostream>
using namespace std;

class MyClass           // The class
{
public:               // Access specifier
    void myMethod1()     // Method/function, Inside class
    {
        cout << "Inside class method." << endl;
    }

    void myMethod2(); // method declaration inside class

    int sum(int a, int b) // parameterized method
    {
        return a+b;
    }
};

void MyClass::myMethod2()   // definition outside the class
{
    cout << "Outside class method." << endl;
}

int main()
{
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod1();  // Call the method
    myObj.myMethod2();

    cout << myObj.sum(45,89) << endl;
    return 0;
}
