#include <iostream>

void printInfo(const std::string name, const int age);
int main() {

	// const parameter = parameter that is effectively read-only
	// 					  code is more secure & conveys intent
	//                    useful for references and pointers. 



	std::string name = "Yousif";
	int age = 21; 

	void printInfo(std::string name, int age);




	return 0;
}


void printInfo(const std::string name, const int age) {
	name = " ";
	age = 0; 
	std::cout << name << '\n';
	std::cout << age << '\n';
}