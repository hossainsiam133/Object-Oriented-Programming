#include <iostream>
#include <thread>
using namespace std;

void threadFunction1()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Thread 1 executing: " << i << endl;
	}
}

void threadFunction2()
{
	for (int i = 5; i < 11; i++)
	{
		cout << "Thread 2 executing: " << i << endl;
	}
}

int main()
{
	thread t1(threadFunction1);
	t1.join();

	thread t2(threadFunction2);
	t2.join();

	cout << "Both threads have finished execution." << endl;

	return 0;
}
/*#include <iostream>
#include <thread>
using namespace std;

void threadFN(int &val)
{
	cout << "I am inside the Thread Function" << endl;
	cout<< "The value is: " << val++ << endl;
}
int main()
{
	int local_val = 23100084;
	thread t1(threadFN, ref(local_val));
	t1.join();
	cout<< "Value inside the Main Thread: " << local_val << endl;
	return 0;
}*/