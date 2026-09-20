#include <iostream>
#include <ctime>



char getUserChoice(); 
char getComputerChoice(); 
void showChoice(char choice); 
void chooseWinner(char player, char computer);


// simple game of rock paper scissors
int main() {

	char player; 
	char computer; 

	player = getUserChoice();
	std::cout << "Your choice: ";
	showChoice(player);  

	computer = getComputerChoice();
	std::cout << "Computer's choice: "; 
	showChoice(computer);  

	chooseWinner(player, computer); 



	return 0; 
}


char getUserChoice() {
	char player;
	std::cout << "Rock-Paper-Scissors Game!\n";

	do {
		std::cout << "Choose one of the following\n"; 
		std::cout << " 'r' for rock\n";
		std::cout << " 'p' for paper\n";
		std::cout << " 's' for scissors\n";
		std::cin >> player; 

	}while(player != 'r' && player != 'p' && player != 's');

	return player;
}


char getComputerChoice() {
	
	srand(time(0));
	int num = rand() % 3 + 1;

	switch(num) {
	case 1:
		return 'r'; 
	case 2: 
		return 'p';
	case 3: 
		return 's'; 

	}
	return 0; 
}


void showChoice(char choice) {

	switch(choice) {
	case 'r':
		std::cout << "Rock\n";
		break; 
	case 'p':
		std::cout << "Paper\n"; 
		break;
	case 's':
		std::cout << "Scissors\n"; 
		break; 
	}
}


void chooseWinner(char player, char computer) {

	switch(player) {
	case 'r': // if the player chooses rock and the computer chooses rock
		if(computer == 'r') {
			std::cout << "IT'S A TIE!\n"; 
		} else if(computer  == 'p') {
			std::cout << "YOU LOSE!\n"; 
		} else { // computer picked scissors
			std::cout << "YOU WIN!\n"; 
		}
		break; 

	case 'p': 
		if(computer == 'r') {
			std::cout << "YOU WIN!\n"; 
		} else if(computer  == 'p') {
			std::cout << "IT'S A TIE!\n"; 
		} else { // computer picked scissors
			std::cout << "YOU LOSE!\n"; 
		}
		break;

	case 's': // if the player chooses rock and the computer chooses rock
		if(computer == 'r') {
			std::cout << "YOU LOSE!\n"; 
		} else if(computer  == 'p') {
			std::cout << "YOU WIN!\n"; 
		} else { // computer picked scissors
			std::cout << "IT'S A TIE\n"; 
		}
		break;

	}
}
