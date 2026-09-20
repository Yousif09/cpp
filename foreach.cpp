#include <iostream>



int main() {


	// foreach loop = loop that eases the traversal over an iterable data set
	// NOTE: range-based for loops is a c++11 extension so make sure to pass this in your compiler: 
	// g++ -std=c++17 foreach.cpp -o foreach

	std::string students[] = {"Spongebob", "Patrick", "Squidward"};
	int grades[] = {65, 72, 81, 93}; 

	// makes it easier although it is less flexible
	// for each type string student in our students array 

	for(std::string student : students) {
		std::cout << student << '\n'; 
	}


	for(int grade : grades) {
		std::cout << grade << '\n'; 
	}




	return 0; 
}