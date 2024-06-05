#include <iostream>

enum class Months {
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь
};

int main() {
	setlocale(LC_ALL, "Russian");

	int monthNum;
	Months month;

	while (true) {
		std::cout << "Введите номер месяца: ";
		std::cin >> monthNum;
		if (monthNum == 0) break;
		if (monthNum > 12 || monthNum < 0) { std::cout << "Неправильный номер!" << std::endl; continue; }

		month = static_cast<Months>(monthNum);

		if (month == Months::Январь) {
			std::cout << "Январь" << std::endl;
		} else if (month == Months::Февраль) {
			std::cout << "Февраль" << std::endl;
		} else if (month == Months::Март) {
			std::cout << "Март" << std::endl;
		} else if (month == Months::Апрель) {
			std::cout << "Апрель" << std::endl;
		} else if (month == Months::Май) {
			std::cout << "Май" << std::endl;
		} else if (month == Months::Июнь) {
			std::cout << "Июнь" << std::endl;
		} else if (month == Months::Июль) {
			std::cout << "Июль" << std::endl;
		} else if (month == Months::Август) {
			std::cout << "Август" << std::endl;
		} else if (month == Months::Сентябрь) {
			std::cout << "Сентябрь" << std::endl;
		} else if (month == Months::Октябрь) {
			std::cout << "Октябрь" << std::endl;
		} else if (month == Months::Ноябрь) {
			std::cout << "Ноябрь" << std::endl;
		} else if (month == Months::Декабрь) {
			std::cout << "Декабрь" << std::endl;
		}
	}

	std::cout << "До свидания!" << std::endl;

	return 0;
}