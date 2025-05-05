#include "ShiftSupervisor.h"
#include <iostream>
using namespace std;

//Mutators and accessors for the class member variables:

//setAnnualsalary-Stores the annual salary.
//inputs=the annual salary, as a double
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for annual salary is updated.
void ShiftSupervisor::setAnnual_Salary(double as) {
	annual_salary = as;
}
//setAnnualProdBonus-Stores the annual production bonus.
//inputs=the annual production bonus, as a double
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for annual production bonus is updated.
void ShiftSupervisor::setAnnual_Production_Bonus(double apb) {
	annual_prod_bonus = apb;
}

//getAnnualSalary-Retrieves the annual salary.
//inputs=none.
//output=the annual salary, as a double.
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the annual salary is returned.
double ShiftSupervisor::getAnnual_Salary() {
	return annual_salary;
}
//AnnualProductionBonus-Retrieves the annual production bonus.
//inputs=none.
//output=the annual production bonus, as a double.
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the annual production bonus is returned.
double ShiftSupervisor::getAnnual_Production_Bonus() {
	return annual_prod_bonus;
}

//printShiftSupervisor-Prints all the ShiftSupervisor’s information, which includes Employee information.
//inputs=none
//output=none
//preconditions=the ShiftSupervisor object must be created first using the constructor.
//postcondition=the ShiftSupervisor information, including that inherited from 
//Employee, is printed.
void ShiftSupervisor::printShiftSupervisor() {
	printEmployee();
	cout << "Annual salary: $" << annual_salary << endl;
	cout << "Annual production bonus: $" << annual_prod_bonus << endl;
}