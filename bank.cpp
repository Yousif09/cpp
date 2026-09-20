#include <iostream>
#include <iomanip> // theres a function here to set precision for floating points

void showBalance(double balance);
double deposit(); 
double withdraw(double balance); 

int main() {


	int choice = 0; 
	do {


	double balance = 0;  
	


	std::cout << "Enter your choice: \n"; 
	std::cout << "1. Show balance\n"; 
	std::cout << "2. Deposit money\n";
	std::cout << "3. Withdraw money\n"; 
	std::cout << "4. Exit\n"; 

	std::cin >> choice; 

	std::cin.clear(); // this function will reset any error flags when it fails to get input
	fflush(stdin); // clears the input buffer

	switch(choice) {
	case 1: showBalance(balance); 
		break; 
	case 2:
		balance += deposit(); // balance = balance + deposit
		showBalance(balance); 
		break; 
	case 3:
		balance -= withdraw(balance); // balance = balance - withdraw
		showBalance(balance); 
		break;
	case 4:
		std::cout << "thanks for visiting\n";
		break; 
	default:
		std::cout << "Invalid choice\n"; 
	}
}while(choice != 4); 


	return 0; 
}



void showBalance(double balance) {
	std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n'; 

}

double deposit() {

	double amount = 0;

	std::cout << "Enter an amount to be deposited: "; 
	std::cin >> amount; 

	if(amount > 0) {
		return amount;
	} else {
		std::cout << "That's not a valid amount: "; 
		return 0; 
	}
	 
}

double withdraw(double balance) {
	double amount = 0; 

	std::cout << "Enter an amount to be withdrawn: "; 
	std::cin >> amount; 

	if(amount > balance) {
		std::cout << "Insufficient funds\n"; 
		return 0; 

	} else if(amount < 0) {
		std::cout << "That's not a valid amount"; 
		return 0;
	} else {
		return amount;
	}

	
}