#include <iostream>
using namespace std;

class EMPLOYEE {
private:
    int empNumber;
    string empName;
    string designation;
    double basic;
    double da;  
    double it;  
    double netSalary;

   
    double calculateDA() {
        return 0.52 * basic;
    }

   
    double calculateIT(double grossSalary) {
        return 0.30 * grossSalary;
    }

    
    void incrementCount() {
        if (designation == "Manager") {
            countManager++;
        } else if (designation == "Engineer") {
            countEngineer++;
        } else if (designation == "Technician") {
            countTechnician++;
        }
    }

public:
    static int countManager;
    static int countEngineer;
    static int countTechnician;

    void inputEmployeeData() {
        cout << "Enter Employee Number: ";
        cin >> empNumber;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Designation (Manager/Engineer/Technician): ";
        getline(cin, designation);
        cout << "Enter Basic Salary: ";
        cin >> basic;

        da = calculateDA();
        double grossSalary = basic + da;
        it = calculateIT(grossSalary);
        netSalary = grossSalary - it;

        incrementCount(); 
    }

    
    void printEmployeeData() const {
        cout << "Employee Number: " << empNumber << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "Income Tax (IT): " << it << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    static void printCounts() {
        cout << "Number of Managers: " << countManager << endl;
        cout << "Number of Engineers: " << countEngineer << endl;
        cout << "Number of Technicians: " << countTechnician << endl;
    }
};

int EMPLOYEE::countManager = 0;
int EMPLOYEE::countEngineer = 0;
int EMPLOYEE::countTechnician = 0;

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    EMPLOYEE employees[n]; 
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        employees[i].inputEmployeeData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].printEmployeeData();
    }

    cout << "\nDesignation Counts:\n";
    EMPLOYEE::printCounts(); 

    return 0;
}
