#include <iostream>



void swap(std::string &x, std::string &y); 

int main() {



	// This shows the difference between pass by value and pass by reference

	std::string x = "Kool-Aid"; 
	std::string y = "Water";
	// now lets swap these two


	// now this won't actually work, because normally when we pass a variable to a function
	//    we're passing by value. When we invoke the function we are just creating copies of the original values  
	//swap(x, y); 

	// so do a pass by refernce where you pass it to the actual memory address!
	// as defined in the function below
	swap(x, y);
	
	std::cout << "X: " << x << '\n';
	std::cout << "Y: " << y << '\n';









	return 0; 
}

void swap(std::string &x, std::string &y) {

	std::string temp;

	temp = x;
	x = y; 
	y = temp;




}