#include<iostream>
using namespace std;

class overloading
{
    public:
    int sum(int a, int b)
    {
        cout<<"function with two INT parameters."<<endl;
        return a+b;
    }

    float sum(float a, float b)
    {
        cout<<"function with two FLOAT parameters."<<endl;
        return a+b;
    }

    int sum(int a, int b, int c)
    {
        cout<<"function with three parameters."<<endl;
        return a+b+c;
    }
};



int main()
{
    overloading myObj;
    cout<<myObj.sum(5.5f,6.6f)<<endl;
    cout<<myObj.sum(5,6,7)<<endl;
    return 0;
}
