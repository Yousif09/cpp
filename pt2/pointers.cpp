#include <iostream>




int main() {


	// pointers = variable that stores a memory address of another variable
	// 			   sometimes it's easier to work with an address


	// & address-of operator
	// * dereference operator


	std::string name = "Yousif"; 
	int age = 21; 
	std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

	// creating a pointer to my name; 
	std::string *pName = &name;

	int *pAge = &age;

	// creating a pointer to the pizza array telling people where it is located: 
	// but wait you can't use the address-of operator, because the array is already an address itself 
	// so we don't even need to use the address of operator for arrays. 
	std::string *pFreePizzas = freePizzas; 


	// to actually access the value at the memory address use the dereference operator
	std::cout << *pName << '\n';
	std::cout << *pAge << '\n';
	std::cout << *pFreePizzas; 



	return 0;
}