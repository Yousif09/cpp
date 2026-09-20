#include <iostream>


class Car {
public:
	std::string make;
	std::string model; 
	int year; 
	std::string color;

	void accelerate() {
		std::cout << "You step on the gas!\n";
	}

	void brake() {
		std::cout << "YOu step on the breaks!\n"; 
	}
};

class Human {
	// we want these attributes to be publicly accessible
public:
	std::string name; 
	std::string occupation; 
	int age; 

	// then a method is a function that belongs to a class: 
	void eat() {
		std::cout << "This person is eating\n"; 
	}

	void drink() {
		std::cout << "This person is drinking\n"; 
	}

	void sleep() {
		std::cout << "This person is sleeping\n"; 
	}


};


int main() {

	// object = a collection of attributes and methods (attributes being characteristics of an item, and methods are functions an item can perform)
	// 			they can have characteristics and could perform actions
	//			can be used to mimic real world items (Phone, book, Dog)
	//			created from a class which acts as a "blue-print"


	// after we create our class (blueprint) we will create a human object:

	Human human1;
	Human human2;

	Car car1; 
	car1.make = "Ford"; 
	car1.model = "Mustang";
	car1.year = 2023;
	car1.color = "silver"; 

	std::cout << car1.make << '\n';
	std::cout << car1.model << '\n';
	std::cout << car1.year << '\n';
	std::cout << car1.color << '\n';

	car1.accelerate(); 
	car1.brake(); 

	human1.name = "Rick"; 
	human1.occupation = "scientist"; 
	human1.age = 70; 

	human2.name = "Morty"; 
	human2.occupation = "Student"; 
	human2.age = 15; 

	std::cout << human1.name << '\n';
	std::cout << human1.occupation << '\n';
	std::cout << human1.age << '\n';

	std::cout << human2.name << '\n';
	std::cout << human2.occupation << '\n';
	std::cout << human2.age << '\n';

	// invoking our function
	human1.eat(); 
	human1.drink();
	human1.sleep(); 

	human2.eat(); 
	human2.drink(); 
	human2.sleep();



	return 0; 
}