#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	int time_request;
	int current_floor;
	int desired_floor;
	int time_of_entry;
	int time_of_exit;

public:
	Person() { time_request = current_floor = desired_floor = time_of_entry = time_of_exit = 0; }
	void operator=(Person &rhs);
	int getTimeRequest() const { return time_request; }
	int getCurrentFloor() const { return current_floor; }
	int getDesiredFloor() const { return desired_floor; }
	int getTimeOfEntry() const { return time_of_entry; }
	int getTimeOfExit() const { return time_of_exit; }
	void setPerson(int timeRequest, int currentFloor, int desiredFloor, int timeEntry, int timeExit);
	void setTimeRequest(int timeRequest) { time_request = timeRequest; }
	void setCurrentFloor(int currentFloor) { current_floor = currentFloor; }
	void setDesiredFloor(int desiredFloor) { desired_floor = desiredFloor; }
	void setTimeOfEntry(int timeEntry) { time_of_entry = timeEntry; }
	void setTimeOfExit(int timeExit) { time_of_exit = timeExit; }

};

/*

-Time of request

-current floor

-desired floor

-time of entry

-time of exit


*/