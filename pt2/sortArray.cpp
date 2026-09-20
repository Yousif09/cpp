#include <iostream>


void sort(int array[], int size);


int main() {


	//  for this we will use a standadrd bubble sort.

	/*

	array[10]

	10, 1, 9, 2, 8, 3, 7, 4, 6, 5
	bubble sort: we begin at index 0, and we are going to examine the element directly at the right of it
	and if the element on the left is larger than the element on the right, we swap those two. Put that number
	in some temp variable, take the element on the right and move it to the left. Put the temp in that opening


	*/


	int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}; 
	int size = sizeof(array) / sizeof(int); // each int is 4 bytes = 32 bits. We have about 10 elements which is 40bytes. 40 / 4 bytes = 10 bytes

	sort(array, size);

	for(int element : array) {
		std::cout << element << " "; 
	}

	return 0; 
}

// bubble sort implementation
void sort(int array[], int size) {

	int temp; 
	for(int i=0; i < size - 1; i++) { // size - 1 because we don't need to compare the last element to anything
		for(int j=0; j < size - i - 1; j++) {
			if(array[j] > array[j + 1]) { // if the element on the left is greater than the one on the right
				temp = array[j]; // store the larger valuye in temp
				array[j] = array[j+1]; // then move the larger value to be in the next spot.
				array[j + 1] = temp; //then keep storing the next values as temp vars

			}

		}
	}

}