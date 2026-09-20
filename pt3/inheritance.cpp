#include <iostream>


class Animal {
public:
	bool alive = true; 

	void eat() {
		std::cout << "This animal is eating\n"; 
	}
};

// Dog will inherit from the Animal class
class Dog : public Animal {
public: 
	// you can have methods which only belong to the child!
	void bark() {
		std::cout << "The dog goes woof!\n"; 
	}


};

class Cat : public Animal {
public:

	void meow() {
		std::cout << "The cat goes meow!\n"; 
	}
};


int main() {


	// inheritance = a class can recieve attributes and methods from another class
	//				 Children classes inherit from a Parent class
	// 	 			 Helps to reuse similar code found within multiple classes

	// now this Dog class uses all the methods from Animal
	Dog dog; 
	Cat cat; 

	std::cout << dog.alive << '\n'; 
	dog.eat(); 
	dog.bark();

	cat.eat(); 
	cat.meow(); 




	return 0; 
}