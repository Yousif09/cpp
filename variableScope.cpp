#include <iostream>

//global variable: (IT IS BEST TO AVOID GLOBAL VARIABLES!! it pollutes the global namespace)
int myNum = 3; 



void printNum();


int main() {


	// Local variables = declared inside a function or block {}
	// Global variables = declared outside of all functions

	int myNum = 1;
	printNum(); 
	std::cout << ::myNum << '\n'; // we are using  the scope resolution operator (::) colon before which tells it to use the global variable first (because locals usually alwysy are first)
	

	return 0; 
}

void printNum() {
	int myNum = 2; 

	std::cout << ::myNum << '\n';
}