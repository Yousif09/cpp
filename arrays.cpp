#include <iostream>


int main() {


	// array = a data structure that can hold multiple values
	// 		   values are accessed by an index number
	//.        "Kind of like a variable that holds multiple values."


	std::string cars[] = {"Honda", "Mustang", "Toyota"}; // this is now an array! which will give us a memory address if we print it
 
 	// remember arrays can only hold values of the same data type. 

 	// you can declare an array and assign values later but you need to assign the size first!
 	// std::string cars[3]; 
 	// assign!

	cars[0] = "Camaro"; // you can reassign values in the array

	std::cout << cars[0] << '\n'; // access it by index!
	std::cout << cars[1] << '\n';
	std::cout << cars[2] << '\n';


	double prices[] = {5.00, 7.50, 9.99, 15.00}; 

	std::cout << prices[0] << '\n'; 
	std::cout << prices[1] << '\n'; 
	std::cout << prices[2] << '\n'; 
	std::cout << prices[3] << '\n'; 





	return 0; 
}