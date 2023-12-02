#include<iostream>
using namespace std;

class worker
{
    public:
    int id;
    int age;

    void set(int i)
    {
      cout<< "Enter the ID and Age of the "<< i+1 << "th Workes's: ";
      cin>> id >> age;
    }
    void display(int i)
    {
      cout<< "The ID No of "<< i+1 << "th Workers is: "<< id << endl;
      cout<< "The Age of "<< i+1 << "th Workers is: "<< age << endl;
    }

};
int main()
{
    worker person[3];
    for(int i=0;i<3;i++)
    {
        person[i].set(i);
        person[i].display(i);
    }
    // Using Refrence of Objects
    worker &ref_1 = person[0];
    worker &ref_2 = person[1];

    ref_1.id = 23100069;
    ref_1.age = 25;

    ref_2.id = 2310169;
    ref_2.age = 30;

    for(int i=0;i<3;i++)
    {
        person[i].display(i);
    }    
    
    return 0;
}