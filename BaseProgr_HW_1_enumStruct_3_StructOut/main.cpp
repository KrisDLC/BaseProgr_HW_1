#include <iostream>
#include <string>

struct Address {
	std::string City;
	std::string Street;
	int House = 0;
	int Flat = 0;
	int Index = 0;
};

void AddressArrayOut(Address* &aAddressArray, int lenArray) {
	for (int i = 0; i < lenArray; ++i) {
		std::cout << "Город: " << aAddressArray[i].City << std::endl;
		std::cout << "Улица: " << aAddressArray[i].Street << std::endl;
		std::cout << "Номер дома: " << aAddressArray[i].House << std::endl;
		std::cout << "Номер квартиры: " << aAddressArray[i].Flat << std::endl;
		std::cout << "Индекс: " << aAddressArray[i].Index << std::endl << std::endl;
	}
}

int main() {
	int lenAddressArray = 2;
	Address* addressArray = new Address[lenAddressArray];
	
	addressArray[0].City = "Москва";
	addressArray[0].Street = "Арбат";
	addressArray[0].House = 12;
	addressArray[0].Flat = 8;
	addressArray[0].Index = 123456;

	addressArray[1].City = "Ижевск";
	addressArray[1].Street = "Пушкина";
	addressArray[1].House = 59;
	addressArray[1].Flat = 143;
	addressArray[1].Index = 953769;

	AddressArrayOut(addressArray, lenAddressArray);

	delete[] addressArray;
	return 0;
}