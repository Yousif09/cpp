#include <iostream>


void bakePizza(); 

void bakePizza(std::string topping1);

void bakePizza(std::string topping1, std::string topping2);



int main() {



 		// overloaded functions: you can have different versions of the same function
		// functions can share the same name they just need different parameters!

	bakePizza();
	bakePizza("pepperoni");
	bakePizza("mushroom", "olive"); 



	return 0; 
}


void bakePizza() {
	std::cout << "Here is your pizza!\n"; 
}

// here we overload the first function and now we have the same function just with different parameters!!
void bakePizza(std::string topping1) {
	std::cout << "Here is your " << topping1 << " pizza!\n";  

}

void bakePizza(std::string topping1, std::string topping2) {
	std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";  

}