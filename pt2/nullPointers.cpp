#include <iostream>




int main() {




	// Null value = a special value that means something has no value
	// 				when a pointer is holding a null value,
	// 				that pointer is NOT pointing at anything (Null pointer)


	// nullptr = keyword that represents a null pointer literal


	// nullptrs are helpful when determining if an address 
	// was successfully assigned to a pointer



	// this is good practice, if we don't know where to assign our pointer to a 
	// mem address then just do nullptr
	int *pointer = nullptr;
	int x = 123; 


	pointer = &x; 


	// *pointer;  if you dereference a null pointer, it can lead to undefined behavior

	// so people do this:

	if(pointer == nullptr) {
		std::cout << "address was not assigned!\n";
	} else {
		std::cout << "address was assigned!\n"; 
		// if we need access to that pointer:
		std::cout << *pointer; // dereference it!
	}








	return 0; 
}