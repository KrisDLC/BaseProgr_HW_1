#include <iostream>

enum class Months {
	������ = 1,
	�������,
	����,
	������,
	���,
	����,
	����,
	������,
	��������,
	�������,
	������,
	�������
};

int main() {
	setlocale(LC_ALL, "Russian");

	int monthNum;
	Months month;

	while (true) {
		std::cout << "������� ����� ������: ";
		std::cin >> monthNum;
		if (monthNum == 0) break;
		if (monthNum > 12 || monthNum < 0) { std::cout << "������������ �����!" << std::endl; continue; }

		month = static_cast<Months>(monthNum);

		if (month == Months::������) {
			std::cout << "������" << std::endl;
		} else if (month == Months::�������) {
			std::cout << "�������" << std::endl;
		} else if (month == Months::����) {
			std::cout << "����" << std::endl;
		} else if (month == Months::������) {
			std::cout << "������" << std::endl;
		} else if (month == Months::���) {
			std::cout << "���" << std::endl;
		} else if (month == Months::����) {
			std::cout << "����" << std::endl;
		} else if (month == Months::����) {
			std::cout << "����" << std::endl;
		} else if (month == Months::������) {
			std::cout << "������" << std::endl;
		} else if (month == Months::��������) {
			std::cout << "��������" << std::endl;
		} else if (month == Months::�������) {
			std::cout << "�������" << std::endl;
		} else if (month == Months::������) {
			std::cout << "������" << std::endl;
		} else if (month == Months::�������) {
			std::cout << "�������" << std::endl;
		}
	}

	std::cout << "�� ��������!" << std::endl;

	return 0;
}