#include <iostream>
#include <vector>




int main() {
	// IMPORTANT NOTE: to compile vectors use -std=c++20 or later to actually compile it!

	// A vector in c++ is a dynamic sequence container provided by the
	// Standard Template Library (STL). It stores elements in contiguous memory and
	// automatically manages its storage as elements are added or removed. 

	// * Vectors can dynamically grow or shrink during program execution
	// * They provide constant-time random access and support efficient insertion and and deletion at the end.

	std::vector<int> vInt = {10, 20, 30, 40};

	for(int x : vInt) {
		std::cout << x << " "; 
	}


	std::vector<long long> longVector = {39247927, 024444}; 
	for(int l : longVector ) {
		std::cout << l << " ";
	}
	

	// operations on a vector: 

	/*

	the push_back() function adds an element at the end of a vector, while
	insert() adds an element at a specified position

	*push_back(value): inserts elements at the end of the vector efficiently. Takes constant time
	O(1) on average, so it's very fast.

	*insert(position, value): inserts element at any position (beginning, middle, end). Takes linear time O(n)
	 as it shifts elements to make space. 
	

	*/

	std::vector<char> v = {'a', 'b', 'c'};

	// inserting 'z' at the back
	v.push_back('z');

	// inserting 'c' at index 1: 
	v.insert(v.begin() + 1, 'c'); 

	for(char i : v) {
		std::cout << i << " "; 
	}




	// accessing elements:


	/*
	Vector elements can be accessed using the subscript operator [] or at the at() function

	* v[i] provides direct access without bounds checking. 
	* v.at(i) performs bounds checking and throws std::out_of_range if the index is invalid.
	* both provide O(1) constant time. 

	*/


	std::vector<int> v1 = {10, 20, 30, 40}; 

	// accessing using operator[]

	std::cout << "Element at index 2 using []: " << v1[2] << '\n'; 


	return 0; 
}