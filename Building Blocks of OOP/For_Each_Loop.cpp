#include <iostream>
using namespace std;
int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    /*for(int i=0;i<10;i++)
    {
        cout<<a1[i]<<endl;
    }*/
    for (int i : a1) // for each loop
    {
        cout << i << endl;
    }
}
