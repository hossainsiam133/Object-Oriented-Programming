#include<iostream>
using namespace std;
class siam
{
    ///Function Overloading...
public:
    void fun()
    {
        cout<<"I am a function with no Arguements"<<endl;
    }
    void fun(int x)
    {
        cout<<"I am a function with int type Arguements: "<<x<<endl;
    }
    void fun(double x)
    {
        cout<<"I am a function with double type Arguements: "<<x<<endl;
    }
    ///Function Overloading...
};
///Operator Overloading...
class comple
{
private:
    int imag,real;
public:
    comple(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    comple operator+ (comple const &obj)
    {
        comple res;
        res.imag=imag+obj.imag;
        res.real=real+obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};  ///Operator Overloading...

///Virtual Function...
class base
{
public:
    virtual void print() ///Virtual is bining dynamically with derived class print function
    {
        cout<<"This is base class print function"<<endl;
    }
    void display()
    {
        cout<<"This is base class display function"<<endl;
    }
};
class derived: public base
{
public:
    void print()
    {
        cout<<"This is derived class print function"<<endl;

    }
    void display()
    {
        cout<<"This is derived class display function"<<endl;
    }
};///Virtual Function...
int main()
{

    ///Virtual Function
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}
