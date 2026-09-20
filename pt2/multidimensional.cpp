#include <iostream>




int main() {

	// multi-dimensional arrays (2D Arrays)
	// it can represent a matrix or grid of data. 


	// first box is for number of rows, next is for columns (you dont need a row size)
	// 		if you're initalizing right away
	std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
							{"Corvette", "Equinox", "Silverado"},
							{"Challenger", "Durango", "Ram 1500"}};


	std::cout << cars[0][0] << " ";
	std::cout << cars[0][1] << " ";
	std::cout << cars[0][2] << "\n";

	std::cout << cars[1][0] << " ";
	std::cout << cars[1][1] << " ";
	std::cout << cars[1][2] << "\n";

	std::cout << cars[2][0] << " ";
	std::cout << cars[2][1] << " ";
	std::cout << cars[2][2] << "\n";

	// to iterate over a 2d array:

	int rows = sizeof(cars) / sizeof(cars[0]);
	int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

	// iterating over each ARRAY, and then use an inner for loop to iterate over each element 
	// in every single array row. 
	for(int i=0; i < rows; i++) {
		for(int j=0; j < columns; j++) {
			std::cout << cars[i][j] << " ";
		}
		std::cout << '\n'; 
	}






	return 0; 
}