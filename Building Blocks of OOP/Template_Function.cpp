#include<iostream>
using namespace std;

// Template function 'ope' that takes two parameters of type 'operation'
// and returns the result of the addition of those parameters.
template<class operation>
operation ope(operation a, operation b)
{
    return a + b;
}

int main()
{
    // Using the 'ope' function with integer parameters 5 and 7.
    cout << "The Addition of 5 and 7 is: "<< ope(5, 7) << endl;

    // Using the 'ope' function with floating-point parameters 5.5 and 6.7.
    cout << "The Addition of 5.5 and 6.7 is: "<< ope(5.5, 6.7) << endl;

    // Using the 'ope' function with floating-point parameters 3.1416 and 6.023.
    cout << "The Addition of 3.1416 and 6.023 is: "<< ope(3.1416, 6.023) << endl;

    return 0;
}
