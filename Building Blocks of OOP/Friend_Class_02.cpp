#include<iostream>
using namespace std;
class A;
class B
{
public:
    void show(A o1) ;

};
class A
{
private:
    int a,b;
public:
    void get()
    {
        cin>>a>>b;
    }

    friend void B :: show(A o1);
};
void B :: show(A o1)
{
    cout<<"Summation of "<<o1.a<<" and "<<o1.b<<" is :"<<o1.a+o1.b<<endl;
    cout<<"Substraction of "<<o1.a<<" and "<<o1.b<<" is :"<<o1.a-o1.b<<endl;
}
int main()
{
    A obj_a;
    obj_a.get();
    B obj_b;
    obj_b.show(obj_a);
    A obj2_a;
    obj2_a.get();
    B obj2_b;
    obj2_b.show(obj2_a);

    return 0;

}
