#include <iostream>



struct student {
	std::string name; 
	double gpa;
	bool enrolled = true;  // note assigning members with a default value is a c++ 20 version or later feature.
}; // be sure to end the struct with a semicolon


int main() {


	// struct = a structure that groups related variables under one name
	//			structs can contain many different data types (strings, ints, double, bool, etc)
	//			variables in a struct are known as "members"
	//			members can be accessed with the .  "Class Member Access operator"

	// an array holds different values with the SAME data types, but
	// a struct holds different values with DIFFERENT data types. 


	// now student1 will have their own name, gpa, and enrolled or not
	student student1; 
	// members are then accessed with a dot. 
	student1.name = "Spongebob";
	student1.gpa = 3.2; 



	std::cout << student1.name << '\n'; 
	std::cout << student1.gpa << '\n'; 
	std::cout << student1.enrolled << '\n'; 


	student student2; 

	student2.name = "Patrick";
	student2.gpa = 2.1; 
	 

	std::cout << student2.name << '\n'; 
	std::cout << student2.gpa << '\n'; 
	std::cout << student2.enrolled << '\n'; 

	student student3; 

	student3.name = "Squidward";
	student3.gpa = 1.5; 
	


	std::cout << student3.name << '\n'; 
	std::cout << student3.gpa << '\n'; 
	std::cout << student3.enrolled << '\n'; 


	return 0;
}