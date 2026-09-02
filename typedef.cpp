#include <iostream>
#include <vector>

// you can give this long thing a alias and the convention is to end them with _t (for type)
//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t; 
typedef int number_t; 

// NOTE: people now work with the 'using' keyword instead of typedef (works better w/templates)
// an example: 

using decimal_t = double; 

int main() {


	/*

	typedef = reserved keyword used to create an additional name
	(alias) for another data type.  New identifier for an exisiting type
	helps with readability and reduces typos

	*/

	// this is the main benefit (LOOK ABOVE)
	//pairlist_t pairlist; 


	text_t firstName = "Yousif"; 

	std::cout << firstName << '\n'; 

	number_t age = 21;
	std::cout << age << '\n'; 

	decimal_t money = 3.99; 
	std::cout << money << '\n'; 



	return 0; 
}