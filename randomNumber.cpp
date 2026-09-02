#include <iostream>
#include <ctime>


int main() {

	// pseudo-random = NOT truly random (but close)

	srand(time(NULL)); // we need to enter a seed for the srand function

	int num1 = (rand() % 6) + 1; // remainder of any division (gives us a random number between 1-6).
	int num2 = (rand() % 6) + 1;
	int num3 = (rand() % 6) + 1;

	std::cout << num1 << '\n'; 
	std::cout << num2 << '\n'; 
	std::cout << num3<< '\n'; 




	return 0; 
}