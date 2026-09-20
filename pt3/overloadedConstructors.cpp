#include <iostream>


class Pizza {
public:
	std::string topping1; 
	std::string topping2; 

	// pizza constructor with no arguments. 
	Pizza() {

	}

	Pizza(std::string topping1) {
		this->topping1 = topping1; 
	}

	// this is the overloaded constructor that will take two string arguments. 
	Pizza(std::string topping1, topping2) {
		this->topping1 = topping1; 
		this->topping2 = topping2; 
	}


}; 

int main() {


	// overloaded constructors = multiple constructors w/ same name but different parameters
	//							 allows for varying arguments when instantiating an object


	Pizza pizza1("pepperoni");
	Pizza pizza2("mushrooms", "peppers");
	Pizza pizza3; // if you're passing in no arguments no need for parantheses

	std::cout << pizza1.topping1; 
	std::cout << pizza2.topping1; 
	std::cout << pizza2.topping2;





	return 0; 
}