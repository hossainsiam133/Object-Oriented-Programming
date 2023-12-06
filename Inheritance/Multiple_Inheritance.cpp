#include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    void display()
    {
        cout<<a<<endl;
    }
    void display1()
    {
        cout<<a<<endl;
    }
};
class B
{
    public:
    int b=20;
    void display()
    {
        cout<<b<<endl;
    }
    void display2()
    {
        cout<<b<<endl;
    }
};
class C: public A, public B
{
    
};

int main()
{
    C obj1;
    //obj1.display();//if two function or variables are same in the both base class then an error will be thrown.and those errors are known as ambiguous error.
    obj1.display1();
    obj1.display2();
    return 0;