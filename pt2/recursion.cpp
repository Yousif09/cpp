#include <iostream>


int recursedFactorial(int n);

int iterativeFactorial(int n);

void walk(int steps);
int main() {

		// recursion: a programming technique where a fucntion invokes itself
		// 			  from within.
		//            break a complex concept into a repeatable single step

		// (iterative vs recursive)


		// advantages = less code and is cleaner
		//              useful for sorting and searching algorithms

		// disadvantages = uses more memory 
		//                 slower. 

	walk(100);


	std::cout << iterativeFactorial(5) << '\n'; 
	std::cout << recursedFactorial(5) << '\n';



	return 0; 
}


void walk(int steps){
	if(steps > 0) {
		std::cout << "You take a step!\n";
		walk(steps - 1); // 99.. 98.. 97..
	}
}


int iterativeFactorial(int n) {

	int result = 1;
	for(int i=1; i <= n; i++) {
		result *= i; // multiply it by each iteration. 
	}

	return result; 

}


int recursedFactorial(int n) {

	if(n > 1) {
		return n * recursedFactorial(n - 1); 
	} else {
		return 1; 
	}




}