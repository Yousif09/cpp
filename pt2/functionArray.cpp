#include <iostream>


double getTotal(double prices[], int size);

int main() {


	// how to pass an array to a function

	double prices[] = {49.99, 15.05, 75, 9.99}; 
	int size = sizeof(prices) / sizeof(prices[0]); 
	double total = getTotal(prices, size);  // when you pass it in here you don't need the brackets


	std::cout << "$" << total; 




	return 0; 
}


// remember when you pass an array to a function it decays as something known as a pointer.
// the function has no idea how big the array is so pass a pointer and tell it where to look 
// or actually calculate the size of it
double getTotal(double prices[], int size) {
	double total = 0; 

	for(int i=0; i < size; i++) {
		total += prices[i]; // total = total + prices[i]

	}

	return total; 

}