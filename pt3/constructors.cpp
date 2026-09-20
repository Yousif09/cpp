#include <iostream>



class Car {
public:
	std::string make;
	std::string model; 
	int year;
	std::string color; 


	Car(std::string make, std::string model, int year, std::string color) {
		this->make = make; 
		this->model = model;
		this->year = year; 
		this->color = color;
	}
};






class Student {
public: 
	std::string name; 
	int age;
	double gpa; 


	// constructor has the same name of the class
	Student(std::string name, int age, double gpa) {
		this->name = name; 
		this->age = age; 
		this->gpa = gpa; 
		// the classes name, age, gpa is equal to the arguments we pass in
	}
};

int main() {


	// constructor = special method that is automatically called when an object is instantiated 
	// 				 useful for assigning values to attributes as arguments. 

	// before we were doing "car.make = "Ford"

	// now it gets automatically set
	Student student1("Spongebob", 25, 3.2); 
	Student student2("Patrick", 40, 1.5); 
	Student student3("Sandy", 21, 4.0);

	Car car1("Chevy", "Corvette", 2022, "blue"); 
	std::cout << car1.make << '\n'; 
	std::cout << car1.model << '\n';  
	std::cout << car1.year << '\n'; 
	std::cout << car1.color << '\n'; 

	std::cout << student1.name << '\n'; 
	std::cout << student1.age << '\n'; 
	std::cout << student1.gpa << '\n'; 

	std::cout << student2.name << '\n'; 
	std::cout << student2.age << '\n'; 
	std::cout << student2.gpa << '\n'; 

	std::cout << student3.name << '\n'; 
	std::cout << student3.age << '\n'; 
	std::cout << student3.gpa << '\n'; 

	return 0; 
}