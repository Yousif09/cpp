#include <iostream>




int main() {


	// how to iterate over an array

	std::string students[] = {"Yousif", "Kire", "Mohamad", "Kumail"}; 
	char grades[] = {'A', 'B', 'C', 'D', 'F'}; 

	for(int i=0; i < sizeof(students) / sizeof(std::string); i++) {
		// we are calculating the size automatically by taking the size in bytes of our array
		// standard string is 32 bytes = 256 bits of memory
		// 4 x 32 = 128 bytes / 32 bytes = 4 (ELEMENTS) or 4 bytes = 32 bits.

		std::cout << students[i] << '\n'; 

	}

	for(int i=0; i < sizeof(grades) / sizeof(char); i++) {
		// 5 bytes / 1 byte = 5 (elements) or just bytes of memory = 40 bits

		std::cout << grades[i] << '\n'; 
	}




	return 0; 
}