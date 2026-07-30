#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int age;
    string course;
    float marks;

    void getData()
    {
        cout << "\nRoll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Course: ";
        getline(cin, course);

        cout << "Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll No : " << rollNo;
        cout << "\nName    : " << name;
        cout << "\nAge     : " << age;
        cout << "\nCourse  : " << course;
        cout << "\nMarks   : " << marks << endl;
    }
};

int main()
{
    Student s[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].displayData();
    }

    return 0;
}