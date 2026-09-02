#include <iostream>

int main() {


	// && = check if two conditions are true
	// || = check if at least one of the two conditions is true
	// ! = reverses the logical state of its operand (not operator)


	int temp; 
	bool sunny = false; 

	std::cout << "Enter the temperature: ";
	std::cin >> temp; 


	// // both conditions must be true
	// if(temp > 0 && temp < 30) {
	// 	std::cout << "The temperature is good!\n"; 

	// } else {
	// 	std::cout << "The temperature is bad\n"; 
	// }


	if(temp <= 0 || temp >= 30) {
		std::cout << "temp is bad"; 
	} else {
		std::cout << "temp is good!"; 
	}

	// remember we don't need to say == true 
	if(!sunny) {
		std::cout << "It is cloudly outside!";
	} else {
		std::cout << "It is sunny outside!"; 
	}

	return 0; 
}