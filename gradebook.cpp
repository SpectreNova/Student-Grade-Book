#include <iostream>
#include <string>
using namespace std;

int main()
{
string name;
int id;
int marks;

cout << "Enter Your Name: ";
getline(cin, name);

cout << "Enter Your ID: ";
cin >> id;

cout << "Enter Your Marks: ";
cin >> marks;

cout << "Name: " << name << endl;
cout << "ID: " << id << endl;
cout << "Total marks: " << marks << endl;

if(marks < 0 || marks > 100)
{
    cout << "Invalid marks" << endl;
}

else if(marks >= 90)
{
    cout << "Grade: A" << endl;
}

else if(marks >= 85)
{
    cout << "Grade: A-" << endl;
}

else if(marks >= 80)
{
    cout << "Grade: B" << endl;
}

else if(marks >= 70)
{
    cout << "Grade: B-" << endl;
}

else if(marks >= 60)
{
    cout << "Grade: C" << endl;
}

else if(marks >= 50)
{
    cout << "Grade: D" << endl;
}

else if(marks >= 40)
{
    cout << "Grade: D-" << endl;
}

else
{
    cout << "Fail" << endl;
}


return 0;
}