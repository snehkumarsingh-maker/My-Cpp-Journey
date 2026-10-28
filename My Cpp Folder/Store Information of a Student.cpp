#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure to store student information
struct Student {
    string name;
    string rollNo;
    vector<string> subjects;
    vector<int> marks;
    double cgpa;
};

// Function to display student information
void printStudent(const Student& s)
{
    cout << "Student Details:\n";

    // Display basic student information
    cout << "Name: " << s.name << '\n';
    cout << "Roll Number: " << s.rollNo << '\n';

    // Display subjects
    cout << "Subjects: [ ";
    for (const string& subject : s.subjects)
        cout << subject << " ";
    cout << "]\n";

    // Display marks
    cout << "Marks: [ ";
    for (int mark : s.marks)
        cout << mark << " ";
    cout << "]\n";

    // Display CGPA
    cout << "CGPA: " << s.cgpa << '\n';
}

int main()
{
    // Create an object of Student structure
    Student s;

    // Initialize student details
    s.name = "GeeksforGeeks";
    s.rollNo = "S20200010234";
    s.subjects = {"DSA", "OOPS", "DBMS", "CCN"};
    s.marks = {89, 78, 86, 90};
    s.cgpa = 8.918;

    // Display the stored information
    printStudent(s);

    return 0;
}