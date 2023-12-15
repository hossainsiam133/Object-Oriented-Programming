#include <iostream>
using namespace std;
// Base class representing a person
class person
{
public:
    int id;
    string name;
    int age;
    void display()
    {
        cout << "Full Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: "<< age << endl;
    }
};
// Derived class representing a programmer, inheriting from person
class programmer : public person
{
public:
    string pro_lang;
    string phone;
    void display1()
    {
        // Call the display function of the base class (person)
        cout<< "Information of Programmers: ";
        display();
        cout << "Proficient Programming Language: " << pro_lang << endl;
        cout << "Phone No: " << phone << endl;
    }
};
// Derived class representing a manager, inheriting from person
class manager : public person
{
public:
    string skill;
    void display2()
    {
        // Call the display function of the base class (person)
        cout<< "Information of Manager: ";
        display();
        cout << "Skill: " << skill << endl;
    }
};
int main()
{
    programmer p1;
    manager m1;
    // Setting values for the programmer object
    p1.id = 23100084;
    p1.name = "Siam Hossain";
    p1.age = 21;
    p1.pro_lang = "C++, Java.";
    p1.phone = "+8801909967161";
    p1.display1();
    cout << endl;
    // Setting values for the manager object
    m1.id = 23100069;
    m1.name = "Talha";
    m1.age = 20;
    m1.skill = "Debugging";
    m1.display2();
    return 0;
}
