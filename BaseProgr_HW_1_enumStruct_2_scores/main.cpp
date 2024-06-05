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

	std::cout << "������ ����� ����: ";
	std::cin >> persAcc.accNum;
	std::cout << "������ ��� ��������: ";
	std::cin >> persAcc.name;
	std::cout << "������ ������: ";
	std::cin >> persAcc.balance;
	std::cout << "������ ���� ������: ";
	std::cin >> newBalance;
	ChangeBalance(persAcc, newBalance);
	std::cout << "��� ����: " << persAcc.name << ", " << persAcc.accNum << ", " << persAcc.balance;

	return 0;
}