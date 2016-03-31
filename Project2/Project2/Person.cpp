#include <iostream>
#include "Person.h"
using namespace std;

void Person::setPerson(int timeRequest, int currentFloor, int desiredFloor, int timeEntry, int timeExit) {
	time_request = timeRequest;
	current_floor = currentFloor;
	desired_floor = desiredFloor;
	time_of_entry = timeEntry;
	time_of_exit = timeExit;
}
void Person::operator=(Person &rhs){
	current_floor = rhs.current_floor;
	desired_floor = rhs.desired_floor;
	time_of_entry = rhs.time_of_entry;
	time_of_exit = rhs.time_of_exit;
	time_request = rhs.time_request;
}