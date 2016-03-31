#pragma once
#include <iostream>
using namespace std;

const int MAX_CAPACITY = 10;
const int MAX_FLOORS = 10;

class Elevator {
private:
	int current_floor;
	char current_direction;
	int num_floors[MAX_FLOORS];

public:
	int getCurrentFloor() const;
	char getCurrentDirection() const;
	void setCurrentFloor(int currentFloor);
	void setCurrentDirection(char currentDirection);

};
/*
-current floor

-current direction

-sorted list of ints for up direction

-sorted list of ints for down direction
*/