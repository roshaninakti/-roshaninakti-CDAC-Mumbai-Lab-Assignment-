#include <iostream>
using namespace std;

class Employee {
private:
    const int employeeId;   
    string name;
    float salary;

public:
    Employee(int id, string n, float s)
        : employeeId(id), name(n), salary(s)
    {
        
    }

    
    void displayDetails() {
        cout << "Employee ID : " << employeeId << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : " << salary << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    Employee e1(101, "Roshani", 55000);
    Employee e2(102, "Amit", 62000);

    e1.displayDetails();
    e2.displayDetails();

    return 0;
}
