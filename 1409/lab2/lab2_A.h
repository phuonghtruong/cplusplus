#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string _employeeName;
    int _employeeAgeInYears;
    string _employeeAddress;
    int _numberOfYearsEmployed;
    double _annualPayInCAD;
    bool _isFullTime;

public:
    Employee();
    Employee(string , int , string , int , double , bool );
    ~Employee();

    void setEmployeeName(string employeeName);
    string getEmployeeName();
    void setEmployeeAgeInYears(int employeeAgeInYears);
    int getEmployeeAgeInYears();
    void setEmployeeAddress(string employeeAddress);
    string getEmployeeAddress();
    void setNumberOfYearsEmployed(int numberOfYearsEmployed);
    int getNumberOfYearsEmployed();
    void setAnnualPayInCAD(double annualPayInCAD);
    double getAnnualPayInCAD();
    void setEmployeeStatus(bool isFullTime);
    bool getEmployeeStatus();
};