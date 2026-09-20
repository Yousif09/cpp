#include <iostream>



int main() {


	// sizeof() = determines the size in bytes of a:
	//            variable, data type, class, objects, etc.

	double gpa = 2.5;
	std::string name = "Yousif"; 
	char grade = 'F'; 
	bool student = true; 
	char grades[] = {'A', 'B', 'C', 'D', 'F'};
	std::string students[] = {"Yousif", "Kire", "Mohamad"};

	std::cout << sizeof(gpa) << " bytes\n";  // 8 bytes
	std::cout << sizeof(name) << " bytes\n";  // a string is a reference data type. 
	std::cout << sizeof(grade) << " bytes\n"; // size of a character is always 1 byte
	std::cout << sizeof(student) << " bytes\n";  // also 1 byte of memory

	std::cout << sizeof(grades) << " bytes\n"; // 5 bytes (remember characters take up 1 byte of memory so an array of 5 characters is 5 bytes)
	std::cout << sizeof(grades) / sizeof(char) << " Elements\n"; // to see how many elements in an array

	std::cout << sizeof(students) / sizeof(std::string) << " Elements\n"; 

	return 0; 
}