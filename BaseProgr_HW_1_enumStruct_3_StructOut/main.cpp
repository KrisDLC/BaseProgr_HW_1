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
		std::cout << "��த: " << aAddressArray[i].City << std::endl;
		std::cout << "����: " << aAddressArray[i].Street << std::endl;
		std::cout << "����� ����: " << aAddressArray[i].House << std::endl;
		std::cout << "����� �������: " << aAddressArray[i].Flat << std::endl;
		std::cout << "������: " << aAddressArray[i].Index << std::endl << std::endl;
	}
}

int main() {
	int lenAddressArray = 2;
	Address* addressArray = new Address[lenAddressArray];
	
	addressArray[0].City = "��᪢�";
	addressArray[0].Street = "�ࡠ�";
	addressArray[0].House = 12;
	addressArray[0].Flat = 8;
	addressArray[0].Index = 123456;

	addressArray[1].City = "�����";
	addressArray[1].Street = "��誨��";
	addressArray[1].House = 59;
	addressArray[1].Flat = 143;
	addressArray[1].Index = 953769;

	AddressArrayOut(addressArray, lenAddressArray);

	delete[] addressArray;
	return 0;
}