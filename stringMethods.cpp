#include <iostream>

int main() {


	// methods talked about here:

	/*

	.length()
	.empty()
	.clear()
	.append()
	.at() -> returns character at specified index
	.insert(0, "") -> inserts a given character to a string at a specified index
	.find('a') -> finds how many characters in a string
	.erase(0, 3) -> erases a portion of a string using a beginning index and ending index
						in this case erase the first 3 letters!


	for more string methods visit: https://www.cplusplus.com/reference/string/string/

	*/ 



	std::string name; 


	std::cout << "Enter your name: ";
	std::getline(std::cin, name); 


	//this will give you the length of a string
	if(name.length() > 12) {
		std::cout << "Your name can't be over 12 characters.\n";
	} else {
		std::cout << "Welcome " << name; 
	}


	// returns a boolean value determining if the string is empty or not: 
	if(name.empty()) {
		std::cout << "You didn't enter your name"; 
	} else {
		std::cout << "Hello " << name; 
	}



	// clears the string object
	name.clear(); 

	std::cout << "Hello" << name; 

	//appending a string to another string
	name.append("@gmail.com"); 

	std::cout << "Your username is now: " << name; // should be Yousif@gmail.com


	// returns the character of the specified index
	std::cout << name.at(0); 


	//inserts a given character to a string at specified index; 
	name.insert(0, "@");
	std::cout << name;


	// this finds how many characters (in this case space)
	std::cout << name.find(' ');


	// erases a portion of a string -> enter a beginning index and a end index
	name.erase(0, 3); // erases the first 3 letters (not inclusive)



	return 0; 
}