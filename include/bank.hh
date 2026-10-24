#ifndef BANK_H
#define BANK_H
#include <string>

class Bank {
private:
	std::string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

#endif