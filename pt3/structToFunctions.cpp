#include <iostream>



struct Car {
	std::string model; 
	int year; 
	std::string color; 
};

void printCar(Car &car); 

void paintCar(Car &car, std::string color);

int main() {




	Car car1; 
	Car car2; 

	car1.model = "Mustang"; 
	car1.year = 2023; 
	car1.color = "blue";

	car2.model = "Corvette"; 
	car2.year = 2024; 
	car2.color = "yellow";


	// a struct is pass by value!, remember we are working with a copy, if you need to use the original then use the & 
	std::cout << &car1 << '\n';

	paintCar(car1, "silver");
	paintCar(car2, "gold");


	printCar(car1); 

	printCar(car2); 





	return 0; 
}

void printCar(Car &car) {
	std::cout << &car << '\n'; 
	std::cout << car.model << '\n'; 
	std::cout << car.year << '\n'; 
	std::cout << car.color << '\n'; 
}

void paintCar(Car &car, std::string color) {
	car.color = color; 
}