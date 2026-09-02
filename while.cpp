#include <iostream>



// while loops: 

int main() {



	std::string name;

	// if(name.empty()) {
	// 	std::cout << "Enter your name: ";
	// 	std::getline(std::cin, name);
	// }

	// what if we want to force a user to enter their name?? then use a while loop

	while(name.empty()) {
		std::cout << "Enter your name:\n ";
		std::getline(std::cin, name);

	}

	std::cout << "Hello " << name; 

     // be careful for infinite loops. 



	return 0; 
}