#include <iostream>

// function declaration:

/*
	this function returns the squared of two sides

*/
double square(double length);

/*
   this function returns the cubed value of a square!


*/ 
double cube(double length); 


/*

  This function concatenates two strings (that is a first name and a last name)

*/
std::string concatString(std::string string1, std::string string2);



int main() {


	// return = return a value back to the spot
	// 			where you called the encompassing function


	double length = 6.0; 
	double area = square(length); 
	double volume = cube(length); 

	std::cout << "Area: " << area << "cm^2\n"; 
	std::cout << "Volume: " << volume << "cm^3\n"; 

	std::string firstName = "Yousif"; 
	std::string lastName = "Alboufradi\n";
	std::string fullName = concatString(firstName, lastName); 
	std::cout << "Hello " << fullName;


	return 0; 
}


// function definition:  match the data type of the return value!
double square(double length) {
	return length * length; 
}



double cube(double length) {
	return length * length * length; 
}


std::string concatString(std::string string1, std::string string2) {
	return string1 + " " + string2; 
}