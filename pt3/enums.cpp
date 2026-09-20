#include <iostream>


enum Day {sunday=0, monday=1, tuesday=2, wednesday=3, 
			thursday=4, friday=5, saturday=6}; 


enum Flavor {vanilla, chocolate, strawberry, mint} // if you don't assign numbers it will default do it!

// each planet in our solar system with their respective size in kms
enum Planet {mercury=4800, venus=12104, earth=12756, mars=6794, jupiter=142984, saturn=108728, 
			uranus=51118, neptune=49532, pluto=2320}; 

int main() {


	// enums = a user-defined data type that consists of 
	//		   paired named-integer constants
	//		   GREAT, if you have a set of potential options. 

	// now this is a set of potential options. 

	Day today = sunday; 


	// normally you can't use strings in switches...
	switch(today) {
		case sunday: std::cout << "SUNDAY!\n";
			break; 
		case monday: std::cout << "MONDAY!\n";
			break; 
		case tuesday: std::cout << "TUESDAY!\n";
			break; 
		case wednesday: std::cout << "WEDNESDAY!\n";
			break; 
		case thursday: std::cout << "THURSDAY!\n";
			break; 
		case friday: std::cout << "FRIDAY!\n";
			break; 
		case saturday: std::cout << "SATURDAY!\n";
			break; 
	}




	return 0; 
}