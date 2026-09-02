#include <iostream>


int main() {


	// switch = alternative to using many "else if" statements
	// compare one value against matching case

	// switches are also more efficient than standard if statements.

	int month;
	std::cout << "Enter the month (1-12): "; 
	std::cin >> month; 

	switch(month) {
	case 1:
		std::cout << "It is January";
		break;
	case 2:
		std::cout << "It is February"; 
		break; 
	// so on. so on.. you get the point

		// the default case if the user doesnt enter the expecting cases.
	default:
		std::cout << "Please enter in only numbers (1-12)"; 

	}


	char grade; 

	std::cout << "What letter grade?: ";
	std::cin >> grade; 

	switch(grade) {
	case 'A': 
		std::cout << "YOU DID GREAT!";
		break; 
	case 'B':
		std::cout << "YOU DID GOOD!"; 
		break;
	case 'C': 
		std::cout << "YOU DID OKAY"; 
		break;
	case 'D':
		std::cout << "YOU DID NOT DO GOOD"; 
		break; 
	case 'F':
		std::cout << "YOU FAILED!"; 
		break; 
	default:
		std::cout << "Please only enter in a letter grade (A-F)"; 
	}



	return 0; 
}