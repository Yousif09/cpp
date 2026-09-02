#include <iostream>

// you can have a different version of the same variable just as long as they are within a
// DIFFERENT namespace
namespace first {

	int x = 1;

}

namespace second {
	int x = 2; 
}


int main() {

	//declare this if you don't want to add the prefix to the std::cout
	using namespace first; 

	// using namespace std; (if you don't want to include the std:: in your prints and ETC..)
	// HOWEVER, there are 100 different entities so there most likely might be a naming conflict

	// this is better: using std::cout; or using std::string; 


	/*

	Namespace = provides a solution for preventing name conflicts in large
	projects. Each entity needs a unique name. A namespace allows for identically
	named entitie as long as the namespaces are different

	*/ 


	int x = 0; 

	// note: if you are displaying your namespace variable and don't explicity state it,
	// it will always use the LOCAL version of the entity

	std::cout << x; 

	// this is how you display a namespace:
	// ANOTHER NOTE: the :: (two colons is known as the SCOPE resolution operator, )
	// so "I am referring to the version of x that is found within the first namespace"
	std::cout << first::x; 
	std::cout << second::x; 

	return 0; 
}