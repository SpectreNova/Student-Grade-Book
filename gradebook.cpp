#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int id;
    int marks;
    string grade;
};


int main()
{
Student student;

cout << "Enter Your Name: ";
getline(cin, student.name);

cout << "Enter Your ID: ";
cin >> student.id;

cout << "Enter Your Marks: ";
cin >> student.marks;

cout << "Name: " << student.name << endl;
cout << "ID: " << student.id << endl;
cout << "Total marks: " << student.marks << endl;

if(student.marks < 0 || student.marks > 100)
{
    cout << "Invalid marks" << endl;
}

else if(student.marks >= 90)
{
    student.grade = "A";
}

else if(student.marks >= 85)
{
    student.grade = "A-";
}

else if(student.marks >= 80)
{
    student.grade = "B";
}

else if(student.marks >= 70)
{
    student.grade = "B-";
}

else if(student.marks >= 60)
{
    student.grade = "C";
}

else if(student.marks >= 50)
{
    student.grade = "D";
}

else if(student.marks >= 40)
{
    student.grade = "D-";
}

else
{
    student.grade = "F";
}

if(student.marks >= 0 && student.marks <=100)
{
    cout << "Grade: " << student.grade << endl;
}

return 0;
}