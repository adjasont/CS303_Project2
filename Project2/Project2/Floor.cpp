#include <iostream>
#include "Floor.h"
#include <vector>
using namespace std;

void Floor::setFloor(int floorNum, int numPeople, bool buttonPushed, char buttonDirection) {
	floor_number = floorNum;
	num_people = numPeople;
	button_pushed = buttonPushed;
	button_direction = buttonDirection;
}
void Floor::printPeeps() const {
	cout << "Desired Floors" << endl;
	for (int i = 0; i < num_people; i++) {
		cout << peeps[i].getDesiredFloor() << endl;
	}
}
void Floor::sortPeeps(){
	for (int i = 0; i < num_people; i++) {
		for (int j = 0; j < num_people; j++) {
			if (peeps[i].getDesiredFloor() > peeps[j].getDesiredFloor()) {
				Person temp;
				temp = peeps[i];
				peeps[i] = peeps[j];
				peeps[j] = temp;
			}
		}
	}
}