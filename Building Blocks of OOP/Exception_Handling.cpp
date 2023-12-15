//Error are mainly two types:
//1. Compile time error : An error while the code is compiling
//2. Run time Error: Errors which are occuring during the run time.
// Exception is a run time error.
// Exception Handling is a mechanism that can handle the exception.
// Keyword: try, catch, throw

# include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<< "Enter number 01: ";
    cin>> num1;
    cout<< "Enter number 02: ";
    cin>> num2;

    try
    {
        if(num2 == 0)
        {
            throw -1;
        }
        double result = (double) num1/num2;
        cout<< "Result: " << result << endl;
    }
    catch(int x)
    {
        cout<< "Divided by zero is not possible !" << endl;
    }
    return 0;
}
