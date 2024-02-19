// Single Inheritance
#include <bits/stdc++.h>
using namespace std;

class person // Base class
{
public:
	string name;
	int id;

	void display1()
	{
		cout << "Student Name is: " << name << endl;
		cout << "Student ID is: " << id << endl;
	}
};
// Child class can access only public and protected member
class employee : public person
{
public:
	int age;
	int salary;
	void display2()
	{
		display1();
		cout << "Student Age is: " << age << endl;
		cout << "Student Salary is: " << salary << " TK" << endl;
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
