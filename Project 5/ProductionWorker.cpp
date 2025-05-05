#include "ProductionWorker.h"
#include <iostream>
using namespace std;

//Mutators and accessors for the class member variables:

//setShift-Stores a shift.
//inputs=the shift, as an integer (1 for day, 2 for night).
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for shift is updated.
void ProductionWorker::setShift(int s) {
	shift = s;
}
//setHourlyPayrate-Stores an hourly pay rate.
//inputs=the hourly pay rate, as a double
//output=none
//preconditions=the object must be created first using the constructor.
//postcondition=the value for the hourly pay rate is updated.
void ProductionWorker::setHourly_Pay_Rate(double hpr) {
	hourly_pay_rate = hpr;
}

//getShift-Retrieves a shift.
//inputs=none.
//output=the shift, as an integer (1 for day, 2 for night).
//preconditions=the object must be created first using the constructor.
//postcondition=the value for shift is returned.
int ProductionWorker::getShift() {
	return shift;
}
//getHourlyPayrate-Retrieves the hourly pay rate.
//inputs=none.
//output=the hourly pay rate, as a double.
//preconditions=the object must be created first using the constructor.
//postcondition=the value for hourly pay rate is returned.
double ProductionWorker::getHourly_Pay_Rate() {
	return hourly_pay_rate;
}

//Productionworker-Prints all the ProductionWorker’s information, which includes Employee information.
//inputs=none
//output=none
//preconditions=the ProductionWorker object must be created first using the constructor.
//postcondition=the ProductionWorker information, including that inherited from 
//Employee, is printed.
void ProductionWorker::printProductionWorker() {
	printEmployee();
	if (shift == 1)
		cout << "Shift: day" << endl;
	else
		cout << "Shift: night" << endl;
	cout << "Hourly pay rate: $" << hourly_pay_rate << endl;
}