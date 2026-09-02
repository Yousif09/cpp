#include <iostream>

void showBalance(double balance);
double deposit(); 
double withdraw(double balance); 

int main() {

	do {


	double balance = 0; 
	int choice = 0; 


	std::cout << "Enter your choice: \n"; 
	std::cout << "1. Show balance\n"; 
	std::cout << "2. Deposit money\n";
	std::cout << "3. Withdraw money\n"; 
	std::cout << "4. Exit\n"; 

	std::cin >> choice; 

	switch(choice) {
	case 1: showBalance(balance); 
		break; 
	case 2:
		balance += deposit(); // balance = balance + deposit
		break; 
	case 3:
		balance -= withdraw(balance); // balance = balance - withdraw
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

}

double deposit() {
	return 0; 
}

double withdraw(double balance) {
	return 0; 
}