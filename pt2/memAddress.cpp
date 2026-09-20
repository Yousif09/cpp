#include <iostream>



int main() {



	// memory address = a location in memory where data is stored
	// a memory address can be accessed with & (address-of operator)

	// a variable is a container for some data, but where do they exist? at a given address!
	std::string name = "Yousif";
	int age = 21; 	
	bool student = true; 


	// displays the hexidecimal address of the variable, and it will likely change if you run it again

	std::cout << &name << '\n'; 
	std::cout << &age << '\n'; // integers take up 4 bytes of memory
	std::cout << &student << '\n';  // remember booleans only take up 1 byte of memory.

	// you can convert hexidecimal to decimals easily online

	// 6099169168, 6099169164, 6099169163


	return 0; 
}