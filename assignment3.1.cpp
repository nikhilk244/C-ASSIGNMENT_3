// . Create a class Employee with:
//  int id
//  string name
//  mutable int accessCount
//  A const member function display() that increments accessCount
//  A user-defined copy constructor (deep copy where applicable)
//  Show difference between:
// o Shallow copy
// o Deep copy
// o Default copy constructor
// o Your user-defined copy constructor
// Tasks:
// 1. Create object e1, call display() multiple times.
// 2. Create e2 = e1; and prove whether copying was shallow or deep.
// 3. Explain why display() must be const and why accessCount must be mutable. 


/* #include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    mutable int accessCount;   // mutable allows modification in const function

public:

    // Constructor
    Employee(int i, string n)
    {
        id = i;
        name = n;
        accessCount = 0;
    }

    // User-defined Copy Constructor (Deep Copy)
    Employee(const Employee &e)
    {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;

        cout << "User-defined Copy Constructor Called\n";
    }

    // const member function
    void display() const
    {
        accessCount++;   // allowed because mutable

        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Display Count: " << accessCount << endl;
        cout << endl;
    }
};

int main()
{
    // Task 1
    Employee e1(101, "Rahul");

    cout << "Calling display() on e1\n";
    e1.display();
    e1.display();
    e1.display();

    // Task 2
    cout << "\nCreating e2 = e1\n";
    Employee e2 = e1;

    cout << "\nDisplaying e2\n";
    e2.display();

    cout << "\nDisplaying e1 again\n";
    e1.display();

    return 0;
}   */

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     int id;
//     string *name;          // pointer to demonstrate deep copy
//     mutable int accessCount;

// public:

//     // Constructor
//     Employee(int i, string n)
//     {
//         id = i;
//         name = new string(n);
//         accessCount = 0;
//     }

//     // User Defined Copy Constructor (Deep Copy)
//     Employee(const Employee &obj)
//     {
//         id = obj.id;

//         // allocating new memory
//         name = new string(*(obj.name));

//         accessCount = obj.accessCount;

//         cout << "User-defined Copy Constructor Called\n";
//     }

//     // const member function
//     void display() const
//     {
//         accessCount++;

//         cout << "ID: " << id << endl;
//         cout << "Name: " << *name << endl;
//         cout << "Access Count: " << accessCount << endl;
//         cout << endl;
//     }

//     // Modify name
//     void setName(string n)
//     {
//         *name = n;
//     }

//     // Destructor
//     ~Employee()
//     {
//         delete name;
//     }
// };

// int main()
// {
//     cout << "Creating e1\n";

//     Employee e1(101, "Nikhil");

//     // Calling display multiple times
//     e1.display();
//     e1.display();
//     e1.display();

//     cout << "\nCreating e2 using copy constructor\n";

//     Employee e2 = e1; // copy constructor called

//     cout << "\nOriginal Object e1\n";
//     e1.display();

//     cout << "\nCopied Object e2\n";
//     e2.display();

//     // modifying e1
//     cout << "\nChanging name of e1\n";
//     e1.setName("Rahul");

//     cout << "\nAfter modification\n";

//     cout << "e1:\n";
//     e1.display();

//     cout << "e2:\n";
//     e2.display();

//     return 0;
// }

// . Create a class Employee with:
//  int id
//  string name
//  mutable int accessCount
//  A const member function display() that increments accessCount
//  A user-defined copy constructor (deep copy where applicable)
//  Show difference between:
// o Shallow copy
// o Deep copy
// o Default copy constructor
// o Your user-defined copy constructor
// Tasks:
// 1. Create object e1, call display() multiple times.
// 2. Create e2 = e1; and prove whether copying was shallow or deep.
// 3. Explain why display() must be const and why accessCount must be mutable. 


#include<iostream>
using namespace std;

class Employee{
    int id;
    string *name;
    mutable int accessCount;

    public:
    Employee(int i,string n){

        id=i;
        name= new string(n);
        accessCount=0;

    }

    Employee(const Employee &obj){

        id=obj.id;
        name= new string(*(obj.name));
        accessCount=obj.accessCount;

    }

    void display() const{

        accessCount++;

        cout << "ID: " << id << endl;
         cout << "Name: " << *name << endl;
        cout << "Access Count: " << accessCount << endl;
        cout << endl;
    }

    void setName(string n){
        *name=n;
    }

    ~Employee(){
        delete name;
    }

};

int main(){

    cout<<"Create el object"<<endl;

    Employee el(101,"Nikhil");
    el.display();
    el.display();
    el.display();

    cout << "\nCreating e2 using copy constructor\n";

    Employee e2 =el;// copy constructor called

    cout << "\nOriginal Object e1\n";
    el.display();

    cout << "\nCopied Object e2\n";
    e2.display();

    // modifying e1
    cout << "\nChanging name of e1\n";
    el.setName("Rahul");

    cout << "\nAfter modification\n";

    cout << "e1:\n";
    el.display();

    cout << "e2:\n";
    e2.display();

    return 0;

}