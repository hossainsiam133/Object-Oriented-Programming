#include <iostream>
using namespace std;

class person
{
    public:
    int id;
    string name;
    int age;
    void display()
    {
        cout<< id << endl;
        cout<< name << endl;
        cout<< age << endl;
    }
};
class programmer : public person
{
    public:
    string pro_lang;
    string phone;
    void display1()
    {
        display();
        cout<< pro_lang << endl;
        cout<< phone << endl;
    }
};
class manager : public person
{
    public:
    string skill;
    void display2()
    {
        display();
        cout<< skill << endl;
    }
};
int main()
{
    programmer p1;
    manager m1;
    p1.id = 23100084;
    p1.name = "Siam Hossain";
    p1.age = 21;
    p1.pro_lang = "C++, Java.";
    p1.phone = "+8801909967161";
    p1.display1();
     
     cout<< endl;
    m1.id = 23100069;
    m1.name = "Talha";
    m1.age = 20;
    m1.skill = "Debugging";
    m1.display2();
    return 0;
}