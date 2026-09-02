#include <iostream>
#include <cmath>


int main() {


	// simple program: calculate the hypotenuse of a right triangle:

	double a;
	double b;
	double c; 

	std::cout << "Enter side A: ";
	std::cin >> a; 

	std::cout << "Enter side B: "; 
	std::cin >> b; 

	a = pow(a, 2);
	b = pow(b, 2);

	c = sqrt(a + b); 

	// or you could write it as c = sqrt(pow(a, 2) + pow(b, 2));

	std::cout << "The hypotenuse is: " << c << '\n';  





	return 0;
}