#include <iostream>



int main() {


	/*
	
	Type Conversion = conversion a value of one data type to another

			* Implicit = automatic
			* Explicit = Precede value with new data type (int)



	*/ 



	double x = (int) 3.14; 

	std::cout << x;  // x should store 3.


	std::cout << (char) 100; // should be 'd'


	// if we did not cast this it would be 0 because of integer truncation!!!
	int correct = 8; 
	int questions = 10; // we need to calculate the score as a percentage
	double score = correct / (double)questions * 100;  

	std::cout << score << "%"; 




	return 0; 
}