#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructor called for " << name << endl;
    }

    // Function to write student data to file
    void writeToFile(ofstream &out)
    {
        out << roll << " " << name << " " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destroying student " << name << endl;
    }
};

int main()
{
    // Task 1: Create array of 3 students
    Student students[3] = {
        Student(1,"Rahul",85.5),
        Student(2,"Nikhil",90),
        Student(3,"Amit",78)
    };

    // Task 2: Write to file
    ofstream file("students.txt");

    for(int i=0;i<3;i++)
    {
        students[i].writeToFile(file);
    }

    file.close();

    cout << "\nData written to file.\n";

    // Task 3: Read from file
    ifstream infile("students.txt");

    int roll;
    string name;
    float marks;

    cout << "\nReading from file:\n";

    while(infile >> roll >> name >> marks)
    {
        cout << "Roll: " << roll
             << " Name: " << name
             << " Marks: " << marks << endl;
    }

    infile.close();

    return 0;
}