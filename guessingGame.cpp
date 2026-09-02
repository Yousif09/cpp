#include <iostream>

// NOTE: for the incrementation of tries it is getting an overflow error!
// make sure to fix this. 

int main() {


	int num;
	int guess; 
	int tries; // how many tries for the user to get hte correct number

	srand(time(NULL)); // getting random seed
	num = (rand() % 100) + 1; // range from (1, 100)


	std::cout << "***** NUMBER GUESSING GAME ******\n";


	do{

		std::cout << "Enter a guess between (1-100): "; 
		std::cin >> guess;
		tries++;

		if(guess > num) {
			std::cout << "Too high!\n"; 

		} else if(guess < num) {
			std::cout << "Too low!\n";

		} else {
			std::cout << "CORRECT! # of tries: " << tries << '\n'; 
		}

	}while(guess != num); 

	std::cout << "***************************\n";

	return 0;  
}