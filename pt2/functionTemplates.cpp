#include <iostream>

// we need to add a template parameter declaration.

// now this can recieve at most two differnet data types and the compiler
// will deduce which one is greater. 
template <typename T, typename U>

// change the return type to auto to let the compiler do the work. 
auto max(T x, U y) {
	return(x > y) ? x : y;
}




int main() {



	// function template = describes what a function looks like
	// 					   can be used to generate as many overloaded functions
	//					   as needed, each using different data types. 

	// ex: it's like a cookie cutter
	//    "cookies are the same shape, but the dough can be different. "


	std::cout << max(1, 2.2); 



	return 0; 
}