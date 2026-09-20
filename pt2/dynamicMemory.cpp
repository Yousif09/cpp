#include <iostream>



int main() {


	// dynamic memory = Memory that is allocated after the program is already
	// 					compiled & running.
	// 					use the 'new' operator to allocate
	//                  memory in the heap rather than the stack 

	// 					useful when we don't know how much memory
	//     				we will need. Makes our programs more flexible,
	//                  especially when accepting user input. 



	/* 

	What is the heap?  : Heap allocation is used for dynamically allocated
	data and objects whos lifetime can extend beyond a single function call. 
	Memory management depends on the programming lanaguage. 

	in C++ (after delete/free): memory is released and becomes availabale for future use. 

	*/

	int *pNum = NULL; 

	// to allocate memory in the heap rather than the stack: 
	pNum = new int; // this will return an address and store it in pNum

	// dereferencing it:
	*pNum = 21; 

	std::cout << "address: " << pNum << '\n';
	std::cout << "value: " << *pNum << '\n';

	// NOW: it is always good to practice when you use the new keyword you want to use the
	// delete keyword after you are done using the memory. 

	// now we are freeing up the memory at this address
	delete pNum; 


	// note if you already know the size of the array before running, then no point in using a pointer.

	char *pGrades = NULL; 
	int size; 

	std::cout << "How many grades to enter in?: "; 
	std::cin >> size; 

	pGrades = new char[size]; 

	for(int i=0; i < size; i++) {
		std::cout << "Enter grade #" << i + 1 << ": ";
		std::cin >> pGrades[i];
	}

	for(int i=0; i < size; i++) {
		std::cout << pGrades[i] << " ";

	}


	// deleting the array
	delete[] pGrades; 



	return 0; 
}