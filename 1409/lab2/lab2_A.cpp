#include "lab2_A.h"

Employee::Employee()
{
    _employeeName = "unknown";
    _employeeAddress = "unknown";
    _employeeAgeInYears = 1;
    _numberOfYearsEmployed = 1;
    _annualPayInCAD = 1;
    _isFullTime = false;
}

Employee::~Employee(){
    // Destructor
}

Employee::Employee(string employeeName, int employeeAgeInYears, string employeeAddress, int numberOfYearsEmployed, double annualPayInCAD, bool isFullTime)
{
    setEmployeeName(employeeName);
    setEmployeeAgeInYears(employeeAgeInYears);
    setEmployeeAddress(employeeAddress);
    setNumberOfYearsEmployed(numberOfYearsEmployed);
    setAnnualPayInCAD(annualPayInCAD);
    setEmployeeStatus(isFullTime);
}

void Employee::setEmployeeName(string employeeName)
{
    _employeeName = employeeName;
}

string Employee::getEmployeeName() { return _employeeName; }

void Employee::setEmployeeAgeInYears(int employeeAgeInYears)
{
    _employeeAgeInYears = employeeAgeInYears;
}

int Employee::getEmployeeAgeInYears() { return _employeeAgeInYears; }

void Employee::setEmployeeAddress(string employeeAddress)
{
    _employeeAddress = employeeAddress;
}

string Employee::getEmployeeAddress() { return _employeeAddress; }

void Employee::setNumberOfYearsEmployed(int numberOfYearsEmployed)
{
    _numberOfYearsEmployed = numberOfYearsEmployed;
}

int Employee::getNumberOfYearsEmployed() { return _numberOfYearsEmployed; }

void Employee::setAnnualPayInCAD(double _annualPayInCAD)
{
    _annualPayInCAD = _annualPayInCAD;
}

double Employee::getAnnualPayInCAD() { return _annualPayInCAD; }

void Employee::setEmployeeStatus(bool isFullTime)
{
    _isFullTime = isFullTime;
}

bool Employee::getEmployeeStatus() { return _isFullTime; }