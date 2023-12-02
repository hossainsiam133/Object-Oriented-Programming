#include <bits/stdc++.h>
using namespace std;

// Class template definition for oop
template <typename T>
class oop
{
private:
    T first; // Private member variable
    T sec;

public:
    // Constructor to initialize the object with two values
    oop(T a, T b)
    {
        first = a;
        sec = b;
    }

    // Member function to perform addition
    void addition();

    // Member function to perform multiplication
    void multiplication();
};

// Definition of the addition member function
template <typename T>
void oop<T>::addition()
{
    cout << "Addition of "<< first <<" and "<< sec << " is: " << first + sec << endl;
}

// Definition of the multiplication member function
template <typename T>
void oop<T>::multiplication()
{
    cout << "Multiplication of "<< first <<" and "<< sec << " is: " << first * sec << endl;
    cout << endl;
}

int main()
{
    // Create an object of oop class with int data type
    oop<int> int_num(10, 15);
    int_num.addition();      
    int_num.multiplication(); 

    // Create an object of oop class with double data type
    oop<double> double_num(3.1416, 6.023);
    double_num.addition();       
    double_num.multiplication(); 

    return 0;
}
