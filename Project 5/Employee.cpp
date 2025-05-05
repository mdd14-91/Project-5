#include "Employee.h"
#include <iostream>
using namespace std;

//Mutators and accessors for the class member variables:

//Employee SetName-Stores an employee name.
//inputs=the employee name, as a string.
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee name is updated.
void Employee::setName(string n) {
	name = n;
}
//SetEmployee_number-Stores an employee number.
//inputs=the employee number, as a string
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee number is updated.
void Employee::setEmployee_Number(string en) {
	employee_number = en;
}
//SetHire_Date-Stores an employee hire date. The recommended format is MM/DD/YYYY.
//inputs=the employee hire date, as a string
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee hire date is updated.
void Employee::setHire_Date(string hd) {
	hire_date = hd;
}

//Employee getName-Retrieves an employee name.
//inputs=none
//output=the employee name, as a string
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee name is returned.
string Employee::getName() {
	return name;
}
//getEmployee_number-Retrieves an employee number.
//inputs=none
//output=the employee number, as a string
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee number is returned.
string Employee::getEmployee_Number() {
	return employee_number;
}
//getHire_date-Retrieves an employee hire date.
//inputs=none
//output=the employee hire date, as a string
//preconditions=the object must be created first using the constructor.
//postcondition=the value for employee hire date is returned.
string Employee::getHire_Date() {
	return hire_date;
}

//printEmployee-Prints all the employee’s information, which are the class member variables.
//inputs=none
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the employee information is printed.
void Employee::printEmployee() {
	cout << "Employee name: " << name << endl;
	cout << "Employee number: " << employee_number << endl;
	cout << "Hire date: " << hire_date << endl;
}