#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    int b;
    void display()
    {
        cout<< a+b << endl;
    }
};
class B : public A
{
    public:
    int c;
    void display1()
    {
        cout<< a+b+c << endl;
    }
};
class C : public B
{
    public:
    int d;
    void display2()
    {
        cout<< a+b+c+d << endl;
    }
};

int main()
{
    C c1;
    c1.a = 10;
    c1.b = 20;
    c1.c = 30;
    c1.d = 40;
    c1.display2();
    return 0;
}