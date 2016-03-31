#include <iostream>
#include "Elevator.h"
#include "Person.h"
#include "Floor.h"
#include <vector>

using namespace std;
Floor createFloor(int floorNum);
int main() {
	Floor floors[MAX_FLOORS];
	for (int i = 0; i < MAX_FLOORS; i++) {
		floors[i] = createFloor((i + 1));
		if(floors[i].getNumPeople() > 1)
			floors[i].sortPeeps();
	} 
	cout << "Floor" << '\t' << "People" << endl;
	for (int i = 0; i < MAX_FLOORS; i++) {
		cout << floors[i].getFloorNum() << '\t' << floors[i].getNumPeople() << endl;
		floors[i].printPeeps(); 
		cout << endl;
	}


	system("pause");
	return 0;
}
Floor createFloor(int floorNum) {
	Floor floor;
	int numPeeps = (rand() % 7); //Creates a random number of people on each floor.
	floor.setFloor(floorNum, numPeeps, false, 'n');
	for (int j = 0; j < numPeeps; j++) {
		Person person;
		person.setCurrentFloor(floorNum);
		person.setDesiredFloor(((rand() % 9) + 1)); //Selects a random desired floor for each peep
		floor.setPeeps(person);
	}
	return floor;
}