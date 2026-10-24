#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include "bank.hh"

int main() {
	Bank customer;
	std::string command;

	std::cout << "\n";

	while (true) {
		std::cout << ">>> ";
		std::cin >> command;

		transform(command.begin(), command.end(), command.begin(), ::tolower);

		if (command == "exit") {
			std::cout << "\n";
			break;
		} else if (command == "open") {
			customer.open_account();
		} else if (command == "dep") {
			customer.deposit_money();
		} else if (command == "with") {
			customer.withdraw_money();
		}

		std::cout << "\n";
	}

	return 0;
}