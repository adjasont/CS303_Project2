# CS303_Project2


We chose 2c.

We need:

Class Person
-Time of request
-current floor
-desired floor
-time of entry
-time of exit

Class Elevator
-current floor
-current direction
-sorted list of ints for up direction
-sorted list of ints for down direction 

3 Lists of Persons
-Waiting
-In Elevator (think about adding a max capacity, ie. 10 people or so)
-Served

Functions for setting or getting all data
Function to add 0 or more persons to the List of Persons
Elevator member function to visit next floor.
Function(s) to switch a user to another list.
Incorporate random numbers


Algorithm:

1. Create a list of persons to start with, randomizing current floors, desired floors, and times of request.
2. Create an elevator object.
3. Start a while loop.
4. Add person(s) to the list of persons.
5. Iterate through the list of persons, adding their desired floor to the elevator's up or down list.
6. Have the elevator visit the next floor in it's current direction if valid. (If it's going up, the next floor has to be higher).
7. If the next floor is invalid, switch directions.
8. Go back to 3.
