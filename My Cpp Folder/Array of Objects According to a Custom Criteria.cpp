#include <bits/stdc++.h>
using namespace std;

class Student
{
  public:
    string name;
    int marks;

    Student(string n, int m)
    {
        name = n;
        marks = m;
    }
};

// Compares two students based on marks and name
static bool compare(const Student &s1, const Student &s2)
{

    // If marks are same, sort by name in lexicographical order
    if (s1.marks == s2.marks)
        return s1.name < s2.name;

    // Otherwise, sort by marks in descending order
    return s1.marks > s2.marks;
}

// Sorts the array of Student objects
vector<Student> sortMarks(vector<Student> &arr)
{
    sort(arr.begin(), arr.end(), compare);
    return arr;
}

int main()
{

    // Array of Student objects
    vector<Student> arr;

    arr.push_back(Student("rahul", 90));
    arr.push_back(Student("aman", 95));
    arr.push_back(Student("zara", 90));
    arr.push_back(Student("bhavesh", 95));

    // Sort the students
    vector<Student> ans = sortMarks(arr);

    // Print the sorted students
    for (Student &student : ans)
        cout << student.name << " " << student.marks << "\n";

    return 0;
}