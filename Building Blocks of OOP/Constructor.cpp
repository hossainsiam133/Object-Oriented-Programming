#include <iostream>
using namespace std;

class person
{
public:
    string name, gender;
    int id, age;
    person()  // Default Constructor
    {
        cout << "Default Constructor is called!" << endl;
    }
    person(string a, int b) // 2 parameterized constructor
    {
        name = a;
        id = b;
    }
    person(string n, string g, int a) // 3 parameterized constructor
    {
        name = n;
        gender = g;
        age = a;
    }
    void display()  // Display name and id of 2 parameterized constructor
    {
        cout << name << " " << id << endl;
    }
    void show()  // Display name, gender and age of 3 parameterized constructor
    {
        cout << name << " " << gender << " " << age << endl;
    }
};

int main()
{
    // Creating object 'p' for calling Default Constructor
    person p;
    // Object 'p1' for Calling 2 parameterized Constructor
    person p1("Topu", 18);
    p1.display();
    // Object 'p2' for Calling 3 parameterized Constructor
    person p2("Siam", "Male", 21);
    p2.show();
    return 0;
}
