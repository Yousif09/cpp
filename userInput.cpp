#include <iostream>


// cout << (insertion operator) (cout = character output)
// cin >> (extraction operator) (cin = character input)


int main() {

	std::string name;
	int age; 


	// IMPORTANT: if you need to read in an input that might have spaces you have to use the
	// std::getline(std::cin, name); function! 

	std::cout << "What is your full name?: ";
	std::getline(std::cin >> std::ws, name); // for strings that have spaces! 
	// another note: the reason we added std::ws is to eliminate any new line characters BEFORE any user input
	// like for example if we had a std::cin >> age there is a \n buffer that we don't see!! so make sure to add that


	std::cout << "What is your age?: "; 
	std::cin >> age;


	std::cout << "Hello " << name << '\n'; 
	std::cout << "You are " << age << " years old!" << '\n';





	return 0; 
}