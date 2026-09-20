#include <iostream>


// if we don't want people changing the temp then set the attributes to be private. 
class Stove {
private:
	int temperature = 0; 
public:
	// one additional step we can do is if we have a constructor
	// you can invoke the setters within a constructor . 

	Stove(int temperature) {
		setTemperature(temperature); 

	}


	// if we want to change temp then make a getter to make a attrinute readable. 
	int getTemperature() {
		return temperature; 
	}

	// in order for a user to change the temp they HAVE to invoke the setTemp method!
	//and within a setter we can add some additional logic!
	void setTemperature(int temperature) {
		if(temperature < 0) {
			this->temperature = 0; 

		} else if(temperature >= 10) {
			this->temperature = 10; 

		} else {
			this->temperature = temperature; 
		}
		
	}


};


int main() {



	// Abstraction = hiding unnecessary data from outside a class
	// getter = function that makes a private attribute READABLE
	// setter = function that makes a private attribute WRITEABLE


	Stove stove(0); 

	//stove.setTemperature(5); 
	std::cout << "The temperature setting is: " << stove.getTemperature(); 



	return 0; 
}