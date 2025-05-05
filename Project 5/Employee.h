#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

//Class description- The Employee class stores employee information: name, employee 
//number, and hire date (all strings). It provides mutators and accessors, and a function 
//to print out the employee information.
class Employee {
private:

    //Class member variables:
    string name;
    string employee_number;
    string hire_date; //in the format of MM/DD/YYYY

public:
    //Employee Constructor
    //inputs=values for class member variables for name, employee number, and 
    //hire date (all strings).
    //output=none
    //preconditions=none, it's the class constructor.
    //postcondition=the Employee class object is created with the values passed
    //in as parameters (or the default parameters)
    Employee(string n = "", string en = "", string hd = "")
        : name{ n }, employee_number{ en }, hire_date{ hd } {
    }

    //Mutators and accessors for the class member variables:

    //setname employee-Stores an employee name.
    //inputs=the employee name, as a string.
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee name is updated.
    void setName(string n);

    //setemployeenumber-Stores an employee number.
    //inputs=the employee number, as a string
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee number is updated.
    void setEmployee_Number(string en);

    //sethiredate-Stores an employee hire date. The recommended format is MM/DD/YYYY.
    //inputs=the employee hire date, as a string
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee hire date is updated.
    void setHire_Date(string hd);

    //getName-Retrieves an employee name.
    //inputs=none
    //output=the employee name, as a string
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee name is returned.
    string getName();

    //getEmployee_Number-Retrieves an employee number.
    //inputs=none
    //output=the employee number, as a string
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee number is returned.
    string getEmployee_Number();

    //getHire_Date-Retrieves an employee hire date.
    //inputs=none
    //output=the employee hire date, as a string
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for employee hire date is returned.
    string getHire_Date();

    //PrintEmployee-Prints all the employee’s information, which are the class member variables.
    //inputs=none
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the employee information is printed.
    void printEmployee();
};

#endif // EMPLOYEE_H#pragma once
