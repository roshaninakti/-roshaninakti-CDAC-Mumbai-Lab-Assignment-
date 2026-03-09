#include <iostream>
#include <vector>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;

public:
    // Constructor
    Employee(int id, string name, double salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    // Getter Methods
    int getEmpID() { return empID; }
    string getEmpName() { return empName; }
    double getEmpSalary() { return empSalary; }

    // Setter Methods
    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    // Calculate Gross Salary
    double calculateGrossSalary()
    {
        double bonus = 0;

        if (empSalary <= 5000)
            bonus = empSalary * 0.10;
        else if (empSalary <= 10000)
            bonus = empSalary * 0.15;
        else
            bonus = empSalary * 0.20;

        return empSalary + bonus;
    }

    // Display Employee Details
    void displayEmployeeDetails()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main()
{
    vector<Employee> employees;
    int choice;

    do
    {
        cout << "\n===== Employee Payroll Menu =====\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name;
            double salary;
            bool exists = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            // Check Unique ID
            for (auto &emp : employees)
            {
                if (emp.getEmpID() == id)
                {
                    exists = true;
                    break;
                }
            }

            if (exists)
            {
                cout << "Employee ID already exists!\n";
            }
            else
            {
                cout << "Enter Employee Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter Salary: ";
                cin >> salary;

                employees.push_back(Employee(id, name, salary));
                cout << "Employee Added Successfully!\n";
            }
        }

        else if (choice == 2)
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (auto &emp : employees)
            {
                if (emp.getEmpID() == id)
                {
                    cout << "Gross Salary: "
                         << emp.calculateGrossSalary() << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
        }

        else if (choice == 3)
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (auto &emp : employees)
            {
                if (emp.getEmpID() == id)
                {
                    emp.displayEmployeeDetails();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
        }

        else if (choice == 4)
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;
            for (auto &emp : employees)
            {
                if (emp.getEmpID() == id)
                {
                    string newName;
                    double newSalary;

                    cout << "Enter New Name: ";
                    cin.ignore();
                    getline(cin, newName);

                    cout << "Enter New Salary: ";
                    cin >> newSalary;

                    emp.setEmpName(newName);
                    emp.setEmpSalary(newSalary);

                    cout << "Employee Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";
        }

        else if (choice == 5)
        {
            cout << "Exiting Program...\n";
        }

        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
