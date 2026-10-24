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
			break;
		} else if (command == "accopen") {
			customer.open_account();
			std::cout << "\n";
		}
	}

	return 0;
}