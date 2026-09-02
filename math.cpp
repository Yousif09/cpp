#include <iostream>



int main() {


	// order of precedence:
	// paranthesis
	// multiplication & division.
	// addition & subtraction

	// arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

	int students = 20;
	students += 1; // students = students + 1;  or just use students++; 

	students++;


	students -= 1; // students = students - 1; 
	students--; 

	students *= 2; // students = students * 2;  

	students /= 2; // students = students / 2; 

	int remainder = students % 2;

	int students = 6 - 5 + 4 * 3 / 2;  // get 7 here!


	std::cout << students; 
	std::cout << remainder; 





	return 0; 
}