#include <iostream>
#include <string>

struct BankAcc {
	int accNum = 0;
	std::string name;
	float balance = 0;
};

void ChangeBalance(BankAcc &aPersAcc, int newBalance) {
	aPersAcc.balance = newBalance;
}

int main() {
	int newBalance = 0;
	BankAcc persAcc;

	std::cout << "Введите номер счёта: ";
	std::cin >> persAcc.accNum;
	std::cout << "Введите имя владельца: ";
	std::cin >> persAcc.name;
	std::cout << "Введите баланс: ";
	std::cin >> persAcc.balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> newBalance;
	ChangeBalance(persAcc, newBalance);
	std::cout << "Ваш счёт: " << persAcc.name << ", " << persAcc.accNum << ", " << persAcc.balance;

	return 0;
}