#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

//Class description- The ShiftSupervisor class inherits from Employee. This class adds
//annual salary and annual production bonus (both doubles). It provides mutators and 
//accessors, and a function to print out the ShiftSupervisor information, which 
//includes all three base class (Employee) values.
class ShiftSupervisor : public Employee {
private:

    //Class member variables:

    double annual_salary;
    double annual_prod_bonus;

public:

    //Shift Supervisor Constructor- uses a constructor initializer list to initialize the base class, Employee.
    //inputs=values for class member variables for both ShiftSupervisor and Employee classes,
    //which include name, employee number, and hire date (all strings) and annual salary
    //and annual production bonus (both doubles).
    //output=none
    //preconditions=none, it's the class constructor.
    //postcondition=the class object is created with the values passed in as parameters (or
    //the default parameters).
    ShiftSupervisor(string n = "", string en = "",
        string hd = "", double as = 0.0, double apb = 0.0)
        : Employee{ n, en, hd }, //call Employee constructor
        annual_salary{ as }, annual_prod_bonus{ apb } {
    }

    //Mutators and accessors for the class member variables:

    //setAnnual Salary-Stores the annual salary.
    //inputs=the annual salary, as a double
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for annual salary is updated.
    void setAnnual_Salary(double as);

    //setAnnualprodbonus-Stores the annual production bonus.
    //inputs=the annual production bonus, as a double
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for annual production bonus is updated.
    void setAnnual_Production_Bonus(double apb);

    //getAnnualsalary-Retrieves the annual salary.
    //inputs=none.
    //output=the annual salary, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the annual salary is returned.
    double getAnnual_Salary();

    //getAnnualProdbonus-Retrieves the annual production bonus.
    //inputs=none.
    //output=the annual production bonus, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the annual production bonus is returned.
    double getAnnual_Production_Bonus();

    //PrintShiftSupervisor-Prints all the ShiftSupervisor’s information, which includes Employee information.
    //inputs=none
    //output=none
    //preconditions=the ShiftSupervisor object must be created first using the constructor.
    //postcondition=the ShiftSupervisor information, including that inherited from 
    //Employee, is printed.
    void printShiftSupervisor();
};

#endif // SHIFTSUPERVISOR_H
#pragma once
