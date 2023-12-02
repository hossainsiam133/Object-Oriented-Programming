/// 5.1
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int &c = a;
    // ponters...

    int *ptr = &b;
    cout << "The Address of a: " << &a << endl;
    cout << "The Address of b: " << &b << endl;
    cout << "The Address of c: " << &c << endl;
    c = 40;
    cout << "The Value of a: " << a << endl;
    *ptr = 100;
    cout << "The Adress of b: " << b << endl;
    cout << &b << endl
         << *ptr;
    return 0;
}
