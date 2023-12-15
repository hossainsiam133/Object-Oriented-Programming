#include <iostream>
using namespace std;
// Define a class named 'worker'
class worker
{
private:
    // Private member variables
    int id, age;
    string name, gender;
public:
    // Public member function to set information for the worker
    void setInfo()
    {
        cout << "Enter your Full Name: ";
        getline(cin, name);
        cout << "Enter your ID: ";
        cin >> id;
        cout << "Enter your Age: ";
        cin >> age;
        cout << "Enter your Gender: ";
        cin >> gender;
        cout << endl;
    }
    // Public member function to display information about the worker
    void getInfo()
    {
        cout << "Full Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
int main()
{
    // Create an object of the 'worker' class
    worker p1;
    // Call the setInfo method to input information
    p1.setInfo();
    // Call the getInfo method to display information
    p1.getInfo();
    return 0;
}
