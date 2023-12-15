#include <iostream>
using namespace std;

class overloading
{
public:
    int sum(int a, int b)
    {
        cout << "Function with two INT parameters addition is: "<< endl;
        return a + b;
    }
    float sum(float a, float b)
    {
        cout << "Function with two FLOAT parameters addition is: " << endl;
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        cout << "Function with three INT parameters addition is: " << endl;
        return a + b + c;
    }
};
int main()
{    overloading myObj;
    // Call the function to add two floating-point numbers
    cout << myObj.sum(5.5f, 6.6f) << endl;
    // Call the function to add three integers
    cout << myObj.sum(5, 6, 7) << endl;
    // Call the function to add two integers
    cout<< myObj.sum(10, 12) << endl;
    return 0;
}
