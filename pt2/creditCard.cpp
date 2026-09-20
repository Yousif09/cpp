#include <iostream>



int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main() {

	// this is a program to determine if a credit card number is valid or not:
	/*


	to do so, we will need to use the Luhn Algorithm:

	1.  Double every second digit from right to left, if double number
		is 2 digits, split them

	2. Add all single digits from step 1

	3. Add all odd numbered digits from right to left

	4. Sum results from steps 2 & 3

	5. if step 4 is divisble by 10, # is valid

	test credit card number: 6011 0009 9013 9424

	1 2 2 00 1 8 2 1 8 4
	Sum = 29
	Odd number Sum: 21
	steps 2 & 3 sum: 50
	50 % 10? YES! this is valid.



	*/ 

	std::string cardNumber;
	int result = 0; 

	std::cout << "Enter a credit card #: ";
	std::cin >> cardNumber; 

	result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber); 

	if(result % 10 == 0) {
		std::cout << cardNumber << " is valid";
	} else {
		std::cout << cardNumber << " is OT valid";
	}







	return 0; 
}


int getDigit(const int number) {
	

	// 18 % 10 = 8,    18/10 = 1, 1%10 = 1
	return number % 10 + (number / 10 % 10); 
}

int sumOddDigits(const std::string cardNumber) {
	int sum = 0; 

	for(int i = cardNumber.size() - 1; i >= 0; i-=2) { // so we can get the 2nd to last digit
		sum += cardNumber[i] - '0';  
	}
	return sum; 
}

int sumEvenDigits(const std::string cardNumber) {
	int sum = 0; 

	for(int i = cardNumber.size() - 2; i >= 0; i-=2) { // so we can get the 2nd to last digit
		sum += getDigit((cardNumber[i] - '0') * 2); 
	}
	return sum; 
}