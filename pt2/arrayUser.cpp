#include <iostream>



int main() {

	// accept user input and place it into an array.
	// arrays are static data structures
	std::string foods[5];
	int size = sizeof(foods) / sizeof(std::string); 
	std::string temp; 

	for(int i=0; i < size; i++) {
		std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": "; 
		std::getline(std::cin, temp);

		if(temp == "q") {
			break; 

		} else {
			foods[i] = temp; 
		}

	}

	std::cout << "You like the following food:\n"; 

	for(int i=0; !foods[i].empty(); i++ ) {
		std::cout << foods[i] << '\n'; 
	}






	return 0;
}