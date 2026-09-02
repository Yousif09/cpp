#include <iostream>

// the rest of the functions are found within the c math header file

#include <cmath>


// math related functions:
int main() {


	double x = 3.14; 
	double y = 4; 
	double z;


	// max function shows the greater number between two numbers
	z = std::max(x, y);

	// min function shows the smaller number bet
	z = std::min(x, y); 

	z = pow(2, 3); // raising two to the power of 3

	z = sqrt(9); // squareroot function

	z = abs(-3);

	z = round(x); // rounds 

	// if you want to round up: 
	z = ceil(x); // use the cieling function!

	// if you alwasy want to round down: 
	z = floor(x); // use the floor function!
	std::cout << z; 


	// VISIT: https://www.cplusplus.com/reference/cmath/  
	// for more math functions!!

	return 0;
}