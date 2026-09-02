#include <iostream>


// functions should be created outside of the main and then call them in the main
// they can be declared after the main (below it but you have to declare it up top first like this:)
// void happyBirthday(); -> and then down below you define it. 

void happyBirthday(std::string name, int age); 

int main() {

	// function = a block of reusable code

	std::string name = "Yousif"; 
	int age = 21; 

	happyBirthday(name, age); // passing the variable name into my happy birthday function
						  // we are making it aware of the variable but the function also needs parameters 



	return 0; 
}

// make sure to add the parameter to the function.
void happyBirthday(std::string name, int age) {
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday dear " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "You are " << age << " Years old\n";

}
