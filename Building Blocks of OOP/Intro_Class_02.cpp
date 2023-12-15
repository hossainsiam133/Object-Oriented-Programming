//Encapsulation
#include<iostream>
using namespace std;

class person
{
private:
    int id,age;
    string name,gender;
public:
    void setInfo()
    {
        getline(cin,name);
        cin>>id;
        cin>>age;
        cin>>gender;
    }
    void getInfo()
    {
        cout<<"Full Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};
int main()
{
    person p1;
    p1.setInfo();
    p1.getInfo();
    return 0;

}
