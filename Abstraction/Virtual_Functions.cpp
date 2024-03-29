// Only showing the functionalities to the user...
// Only Base Class can only be an Abstract Class...
// Abstract class can not creat an Object....
// The Base class virtual method must be override in the derived class...
#include <iostream>
#include <conio.h>
using namespace std;
// Using Abstract base class defining the Virtual Function for car drivers
class carDriver
{
public:
    virtual void information() = 0; // Pure virtual function for displaying information
    virtual void get()
    {
        // Virtual function for getting input
    }
};
// Derived class Siam implementing the carDriver interface
class Siam : public carDriver
{
public:
    int id;
    int salary;
    void get()
    {
        cout << "Enter the ID and Salary of Siam: ";
        cin >> id >> salary;
    }
    void information()
    {
        cout << "The ID No of Siam is: " << id << endl;
        cout << "The Monthly salary of Siam is: " << salary << endl;
    }
};
// Derived class Talha implementing the carDriver interface
class Talha : public carDriver
{
public:
    int id;
    string home_add;
    void get()
    {
        cout << endl
             << "Enter the ID and Home Address of Talha: ";
        cin >> id;
        getline(cin, home_add);
    }
    void information()
    {
        cout << "The ID No of Talha is: " << id << endl;
        cout << "The Home Address of Talha is: " << home_add << endl;
    }
};
int main()
{
    carDriver *v;
    Siam s;
    Talha t;
    // Using a pointer to the base class
    v = &s;
    v->get();
    v->information();

    v = &t;
    v->get();
    v->information();
    return 0;
}
