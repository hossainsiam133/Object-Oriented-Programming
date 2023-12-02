#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int id;

    person(string a, int b){ //constructor
        name=a;
        id=b;
    }

    void display(){
    cout<<name<<" "<<id<<endl;
    }
};

int main()
{
    person p1("Topu",18); //constructor call when object creating
    //p1.id=1;
    return 0;
}
