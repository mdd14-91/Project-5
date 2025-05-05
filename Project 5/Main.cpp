#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

//This function is used to test the classes in the assignment, as described in each section
//of the assignment.
int main() {

	cout << "*****Production workers: " << endl << endl;

	ProductionWorker StuWard = ProductionWorker("Stuart Ward", "1234", "11/03/1993", 1, 18.00);
	StuWard.printProductionWorker();
	cout << endl << endl;

	ProductionWorker JoeJones = ProductionWorker("Joseph Jones", "1235", "11/03/1993", 2, 22.00);
	JoeJones.printProductionWorker();
	cout << endl << endl;

	cout << "*****Shift supervisor: " << endl << endl;

	ShiftSupervisor SusanThomas =
		ShiftSupervisor("Susan Thomas", "0123", "04/18/1988", 120000.0, 20000.0);

	SusanThomas.printShiftSupervisor();
	cout << endl << endl;

	cout << "*****Team leader: " << endl << endl;

	TeamLeader SteveSmith =
		TeamLeader("Stephen Smith", "0012", "05/02/1985", 250000.0, 50000.0, 4000.0, 25, 30);
	//Steve is an overachiever, so he has attended more than the required amount of training.

	SteveSmith.printTeamLeader();
	cout << endl << endl;
}