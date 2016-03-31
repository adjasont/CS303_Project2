#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
using namespace std;

class Floor {
private:
	int num_people;
	bool button_pushed;
	char button_direction;
	int floor_number;
	vector<Person> peeps;
public:
	Floor() { ; }
	void setFloor(int floorNum, int numPeople, bool buttonPushed, char buttonDirection);
	void setPeeps(Person peep) { peeps.push_back(peep); }
	void sortPeeps();
	int getFloorNum() const { return floor_number; }
	int getNumPeople() const { return num_people; }
	bool buttonPushed() const { return button_pushed; }
	char buttonDirection() const { return button_direction; }
	void printPeeps() const;
};
