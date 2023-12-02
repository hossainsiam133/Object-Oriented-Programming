#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c,d; //Public Member variables
    void display()   //Methods
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
    }
};
int main()
{
    A obj1;
    obj1.a=5;
    obj1.b=6;
    obj1.c=7;
    obj1.d=obj1.a+obj1.b+obj1.c;

    obj1.display();

    A obj2;
    obj2.a=50;
    obj2.b=70;
    obj2.c=100;
    obj2.d=obj2.a-obj2.b-obj2.c;

    obj2.display();
    return 0;
}
