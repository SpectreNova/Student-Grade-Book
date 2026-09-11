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

return 0;
}