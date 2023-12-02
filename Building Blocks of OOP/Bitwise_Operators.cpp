#include<iostream>
using namespace std;
int main()
{
    const int num1=5,num2=3;  //Constant Variable...
    int num3=num1 & num2;     //AND operator...
    int num4=num1 | num2;     //OR operator...
    int num5=num1 ^ num2;     //XOR operator...

    cout<<num3<<endl;
    cout<<num4<<endl;
    cout<<num5<<endl;

    int num7=10;
    int num8=num7>>4;
    cout<<num8<<endl;
    int num9=5;
    int num10=num9<<3;
    cout<<num10<<endl;
    int sum,sub;
    cin>>sum>>sub;
    return 0;
}
