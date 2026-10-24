#include "bank.hh"
#include <iostream>
#include <iomanip>
#include <string>

void Bank::open_account() {
	std::cout << "\nEnter your full name: ";
	std::cin.ignore();
	std::getline(std::cin, name);

	std::cout << "\nEnter your address: ";
	std::getline(std::cin, address);

	std::cout << "\nWhat type of account would you like to open?"
				 " Saving (S) or Current (C): ";
	std::cin >> acc_type;

	std::cout << "\nEnter initial deposit amount: ";
	std::cin >> balance;

	std::cout << "\nAccount successfully created!\n";
}

void Bank::deposit_money() {
	float amt;

	std::cout << "\nHow much will you be depositing? ";
	std::cin >> amt;

	if (amt > 0) {
		balance += amt;
		std::cout << "\nDeposit successfull!\n";
		std::cout << "\nNew available balance: " << std::fixed << std::setprecision(2) << balance << std::endl;
	} else {
		std::cout << "\nInvalid deposit amount!\n";
	}
}

void Bank::withdraw_money() {
	float amt;

	std::cout << "\nHow much will you be withdrawing? ";
	std::cin >> amt;

	if (amt > balance) {
		std::cout << "\nInsufficient balance! Current balance is: " << std::fixed << std::setprecision(2) << balance << std::endl;
	} else if (amt <= 0) {
		std::cout << "\nInvalid withdrawal amount!\n";
	} else {
		balance -= amt;
		std::cout << "\nWithdrawal successfull!\n";
		std::cout << "\nNew available balance: " << std::fixed << std::setprecision(2) << balance << std::endl;
	}
}