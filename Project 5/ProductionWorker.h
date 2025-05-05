#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

//Class description- The ProductionWorker class inherits from Employee. This class adds
//shift (an integer, 1 for day, 2 for night) and hourly pay rate (double).
//It provides mutators and accessors, and a function to print out the ProductionWorker
//information, which includes all three base class (Employee) values.
class ProductionWorker : public Employee {
private:

    //Class member variables:

    int shift; //1 for day, 2 for night
    double hourly_pay_rate;

public:

    //Production Worker Constructor- uses a constructor initializer list to initialize the base class, Employee.
    //inputs=values for class member variables for both ProductionWorker and Employee classes,
    //which include name, employee number, and hire date (all strings) and shift 
    //(an integer, 1 for day, 2 for night) and hourly pay rate (a double).
    //output=none
    //preconditions=none, it's the class constructor.
    //postcondition=the class object is created with the values passed in as parameters (or
    //the default parameters)
    ProductionWorker(string n = "", string en = "", string hd = "", int s = 1, double hpr = 0.0)
        : Employee{ n, en, hd }, //call Employee constructor
        shift{ s }, hourly_pay_rate{ hpr } {
    }

    //Mutators and accessors for the class member variables:

    //setShift-Stores a shift.
    //inputs=the shift, as an integer (1 for day, 2 for night).
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for shift is updated.
    void setShift(int s);

    //setHourly_pay_rate-Stores an hourly pay rate.
    //inputs=the hourly pay rate, as a double
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the hourly pay rate is updated.
    void setHourly_Pay_Rate(double hpr);

    //getShift-Retrieves a shift.
    //inputs=none.
    //output=the shift, as an integer (1 for day, 2 for night).
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for shift is returned.
    int getShift();

    //getHourly_Pay_Rate-Retrieves the hourly pay rate.
    //inputs=none.
    //output=the hourly pay rate, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for hourly pay rate is returned.
    double getHourly_Pay_Rate();

    //PrintProductionworker-Prints all the ProductionWorker’s information, which includes Employee information.
    //inputs=none
    //output=none
    //preconditions=the ProductionWorker object must be created first using the constructor.
    //postcondition=the ProductionWorker information, including that inherited from 
    //Employee, is printed.
    void printProductionWorker();
};

#endif // PRODUCTIONWORKER_H#pragma once
