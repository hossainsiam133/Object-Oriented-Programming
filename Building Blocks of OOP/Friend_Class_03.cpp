#include <iostream>
using namespace std;
class c1
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of a inside c1: " << a << endl;
    }
    friend class c3;
};
class c2
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of a inside c2: " << a << endl;
    }
    friend class c3;
};
class c3
{
public:
    void swapc1c2(c1 &o1, c2 &o2)
    {
        int temp = o1.a;
        o1.a = o2.a;
        o2.a = temp;
    }
};

int main()
{
    c1 obj1;
    obj1.setA(10);
    obj1.display();

    c2 obj2;
    obj2.setA(30);
    obj2.display();

    c3 obj3;
    obj3.swapc1c2(obj1, obj2);
    cout << "After swap: " << endl;
    obj1.display();
    obj2.display();

    return 0;
}
