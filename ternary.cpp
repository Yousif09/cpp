#include <iostream>

int main() {


	// ternary operator ?: replacement to an if/else statement
	// condition ? expression1 : expression2


	int grade = 75; 

	(grade >= 60) ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

	// first we put the condition (or question like if grade >= 60)
	// then the ? is the expression so if it is then output this and the : (colon)
	// is pretty much the else statement

	// NOTE: Parantheses is optional in ternary operators!

	int number = 9; 

	number % 2 ? std::cout << "ODD" : std::cout << "EVEN"; 


	bool hungry = true; 

	// remember if you're examining bool values you don't need to say hungry == true?  because
	// it already implies it is true in the assignment of the variable

	//hungry ? std::cout << "You are hungry" : std::cout << "You are full!"; 

	// you can also write it like this if you want
	std::cout << (hungry ? "You are hungry" : "You are full");


	return 0;
}