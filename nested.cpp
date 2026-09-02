#include <iostream>



int main() {



	/* nested loop is a loop inside of a loop! */


// I want to count to 10 (3) times! remember to change indexes! j for the counting index


	for(int i=1; i<=3; i++) {
		for(int j=1; j <= 10; j++) {
		std::cout << j << ' ';

	    }
	    // but every time we exit the outer loop once I want a new line:
	    std::cout << '\n'; 

	}

	// small rectangle maker program:

	int rows;
	int columns; 
	char symbol; 

	std::cout << "How many rows?: "; 
	std::cin >> rows; 

	std::cout << "How many columns?: "; 
	std::cin >> columns; 

	std::cout << "Enter a symbol to use: "; 
	std::cin >> symbol;

	for(int i=1; i<=rows; i++) {
		// columns is the inner loop
		for(int j=1; j<=columns; j++) {
			std::cout << symbol;
		}
		std::cout << '\n';


	}

	


	return 0; 
}