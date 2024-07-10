#include <iostream>
using namespace std;

class EMPLOYEE {
private:
    int empNumber;
    string empName;
    double basic;
    double da;  // Dearness Allowance
    double it;  // Income Tax
    double netSalary;

    // Function to calculate DA
    double calculateDA() {
        return 0.52 * basic;
    }

    // Function to calculate IT
    double calculateIT(double grossSalary) {
        return 0.30 * grossSalary;
    }

public:
    // Function to input employee data
    void inputEmployeeData() {
        cout << "Enter Employee Number: ";
        cin >> empNumber;
        cin.ignore(); // To ignore any leftover newline character
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basic;

        da = calculateDA();
        double grossSalary = basic + da;
        it = calculateIT(grossSalary);
        netSalary = grossSalary - it;
    }

    // Function to print employee data
    void printEmployeeData() const {
        cout << "Employee Number: " << empNumber << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "Income Tax (IT): " << it << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    EMPLOYEE employees[n]; // Array of EMPLOYEE objects

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        employees[i].inputEmployeeData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].printEmployeeData();
    }

    return 0;
}
