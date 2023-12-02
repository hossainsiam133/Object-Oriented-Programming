#include <iostream>
using namespace std;

class student
{
private:
    int marks;
    int total_marks;

public:
    // Function to set the marks for a student
    void set_marks(int i)
    {
        cout << "Enter the marks of "<< i << "th student is: ";
        cin >> marks;
    }

    // Function to add the marks of two students
    void add_marks(student m1, student m2)
    {
        total_marks = m1.marks + m2.marks;
    }

    // Function to display the total marks
    void display()
    {
        cout << "Total Marks is: " << total_marks;
    }
};

int main()
{
    // Creating three student objects
    student s1, s2, s3;

    // Setting marks for the first two students
    s1.set_marks(1);
    s2.set_marks(2);

    // Adding the marks of the first two students and storing the result in the third student
    s3.add_marks(s1, s2);

    // Displaying the total marks of the third student
    s3.display();

    return 0;
}
