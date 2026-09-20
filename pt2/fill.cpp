#include <iostream>

int main() {


	// fill() = fills a range of elements with a specified value
	//          fill(begin, end, value)


	// we don't want to manually store ex: "pizza" 100 times so use fill()
	const int SIZE = 99; 
	std::string foods[SIZE];

	// beginning address, ending address. ANd then obviously the value. 
	fill(foods, foods + (SIZE/3), "pizza");
	fill(foods + (SIZE/3), foods + (SIZE/3) * 2, "Hamburgers"); 
	fill(foods + (SIZE/3)*2, foods + SIZE, "Hotdogs"); 

	for(std::string food : foods) {
		std::cout << food << '\n';
	}



	return 0;
}