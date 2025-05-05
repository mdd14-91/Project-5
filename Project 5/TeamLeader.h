#pragma once
#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ShiftSupervisor.h"

//Class description- The TeamLeader class inherits from ProductionWorker, which
//inherits from Employee. This class adds monthly bonus (a double), and required training
//hours and attended training hours (both integers). It provides mutators and 
//accessors, and a function to print out the TeamLeader information, which 
//includes both ProductionWorker values, and all three Employee values.
class TeamLeader : public ShiftSupervisor {
private:

    //Class member variables:

    double monthly_bonus;
    int required_training_hours;
    int attended_training_hours;

public:

    //shiftsupervisor Constructor, uses initializer lists to initialize ProductionWorker and Employee parts.
    //inputs=values for class member variables for the TeamLeader class, as well as both 
    //ShiftSupervisor and Employee classes, which includes name, employee number, and hire date 
    //(all strings), annual salary and annual production bonus (both doubles), and monthly bonus
    //(a double), and finally, required training hours and attended training hours (both integers).
    //output=none
    //preconditions=none, it's the class constructor.
    //postcondition=the class object is created with the values passed in as parameters.
    TeamLeader(string n, string en, string hd, double as, double apb, double mb, int rth, int ath)
        //call ShiftSupervisor constructor, which calls the Employee constructor
        : ShiftSupervisor(n, en, hd, as, apb),
        //initialize TeamLeader class member variables
        monthly_bonus(mb), required_training_hours(rth), attended_training_hours(ath) {
    }

    //Mutators and accessors for the class member variables:

    //setMonthly_bonus-Stores the monthly bonus.
    //inputs=the monthly bonus, as a double
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the monthly bonus is updated.
    void setMonthly_Bonus(double mb);

    //setRequired_Training_Hours-Stores the required training hours.
    //inputs=the required training hours, as an integer
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the required training hours is updated.
    void setRequired_Training_Hours(int rth);

    //setAttendedtraininghours-Stores the attended training hours.
    //inputs=the attended training hours, as an integer
    //output=none
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the attended training hours is updated.
    void setAttended_Training_Hours(int ath);

    //getMonthlyBonus-Retrieves the monthly bonus.
    //inputs=none
    //output=the monthly bonus, as a double
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the monthly bonus is returned.
    double getMonthly_Bonus();

    //getRequiredtraininghours-Retrieves the required training hours.
    //inputs=none
    //output=the required training hours, as an integer
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the required training hours is returned.
    int getRequired_Training_Hours();

    //getattendedtrainhours-Retrieves the attended training hours.
    //inputs=none
    //output=the attended training hours, as an integer
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for the attended training hours is returned.
    int getAttended_Training_Hours();

    //printteamleader-Prints all the TeamLeader's information, as well as the ShiftSupervisor’s 
    //information, which includes Employee information.
    //inputs=none
    //output=none
    //preconditions=the TeamLeader object must be created first using the constructor.
    //postcondition=the TeamLeader information, including that inherited from 
    //ShiftSupervisor, and Employee, is printed.
    void printTeamLeader();
};

#endif // TEAMLEADER_H

