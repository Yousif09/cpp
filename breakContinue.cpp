#include <iostream>



int main() {

	// break = break out of a loop
	// continue = skip current iteration


	for(int i=1; i <= 20; i++) {
		// i wanna skip the #13
		if(i == 13) {
			continue; // using the continue keyword we skip the current iteration so we skip 13
			break; // if we use break then we stop once we get to 13. 
		}
		std::cout << i << '\n';

	}


	return 0; 




}