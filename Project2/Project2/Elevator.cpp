#include <iostream>
#include "Elevator.h"
using namespace std;

int Elevator::getCurrentFloor() const {
	return current_floor;
}
char Elevator::getCurrentDirection() const{
	return current_direction;
}
void Elevator::setCurrentFloor(int currentFloor) {
	current_floor = currentFloor;
}
void Elevator::setCurrentDirection(char currentDirection) {
	current_direction = currentDirection;
}