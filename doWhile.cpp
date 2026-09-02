#include <iostream>



int main() {


	// do while loop = do some block of code first,
	// then repreat again if condiition is true


	int number;

	// while(number < 0) {
	// 	std::cout << "Enter a positive #: "; 
	// 	std::cin >> number; 
	// }

	// std::cout << "The # is: " << number; 


	// do while implementation (because we want to run the code inside once and then repeat it if condition is true)


	// do the code inside once and then check
	do{
		std::cout << "Enter a positive #: ";
		std::cin >> number; 
	}while(number < 0);

	std::cout << "The # is: " << number; 


	return 0; 
}