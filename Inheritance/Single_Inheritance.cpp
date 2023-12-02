//Single Inheritance
#include <bits/stdc++.h>
using namespace std;

class person
{
	public:
	string name;
	int age;

	void display1()
	{
		cout<< name << endl;
		cout<< age << endl;
	}
};
//Child class can access only public and protected member
class employee : public person
{
	public:
	int id;
	int salary;
	void display2()
	{
		cout<< id << endl;
		cout<< salary << endl;
		display1();
	}
     
};
int main()
{
	employee e1;
	e1.name = "Siam Hossain";
	e1.age = 21;
	e1.id = 23100084;
	e1.salary = 20000;

	e1.display2(); 
	return 0;
}
