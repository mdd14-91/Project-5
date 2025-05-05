#include "TeamLeader.h"
#include <iostream>
using namespace std;

//Mutators and accessors for the class member variables:

//setmonthlybonus-Stores the monthly bonus.
//inputs=the monthly bonus, as a double
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the monthly bonus is updated.
void TeamLeader::setMonthly_Bonus(double mb) {
	monthly_bonus = mb;
}
//setrequiredtraininghours-Stores the required training hours.
//inputs=the required training hours, as an integer
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the required training hours is updated.
void TeamLeader::setRequired_Training_Hours(int rth) {
	required_training_hours = rth;
}
//setattendedtrainhours-Stores the attended training hours.
//inputs=the attended training hours, as an integer
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the attended training hours is updated.
void TeamLeader::setAttended_Training_Hours(int ath) {
	attended_training_hours = ath;
}

//getmonthlybonus-Retrieves the monthly bonus.
//inputs=none
//output=the monthly bonus, as a double
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the monthly bonus is returned.
double TeamLeader::getMonthly_Bonus() {
	return monthly_bonus;
}
//getrequiredtrainhours-Retrieves the required training hours.
//inputs=none
//output=the required training hours, as an integer
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the required training hours is returned.
int TeamLeader::getRequired_Training_Hours() {
	return required_training_hours;
}
//getattendedtrainhours-Retrieves the attended training hours.
//inputs=none
//output=the attended training hours, as an integer
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the attended training hours is returned.
int TeamLeader::getAttended_Training_Hours() {
	return attended_training_hours;
}

//printteamleader-Prints all the TeamLeader's information, as well as the ShiftSupervisor’s 
//information, which includes Employee information.
//inputs=none
//output=none
//preconditions=the TeamLeader object must be created first using the constructor.
//postcondition=the TeamLeader information, including that inherited from 
//ShiftSupervisor, and Employee, is printed.
void TeamLeader::printTeamLeader() {
	printShiftSupervisor();
	cout << "Monthly bonus: $" << monthly_bonus << endl;
	cout << "Required training hours: " << required_training_hours << endl;
	cout << "Attended training hours: " << attended_training_hours << endl;
}
