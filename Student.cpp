#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:

    Student() {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0.0;
    }

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int rollNo, string name, float marks) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void printDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name   : " << name << endl;
        cout << "Marks  : " << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    Student s1;

    Student s2(101, "Roshani", 88.5);

    Student s3(102, "Amit", 75.0);

    s1.printDetails();
    s2.printDetails();
    s3.printDetails();

    return 0;
}

/*
The compiler generates a default constructor only if no constructor is defined in the class.

If any constructor is defined by the programmer, the compiler does not create a default constructor automatically.

Yes, constructors can be overloaded by defining multiple constructors with different parameter lists.
*/
