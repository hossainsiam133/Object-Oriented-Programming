///Friend_class_method :
#include <iostream>
using namespace std;
class A
{
    private:
    int id;
    string name;   
    public:
    void get()
    {
       cin>>id;
       getline(cin,name);
       getline(cin,name);
    }
    friend class B;
};
class B
{
    public:
    void output(A obj)
    {
        cout<<obj.id<<endl;
        cout<<obj.name<<endl;
    }
};
int main() 
{
    A obj1;
    obj1.get();
    B show;
    show.output(obj1);
    return 0;
}