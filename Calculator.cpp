#include <iostream>

int chose;

int main() {
	std::cout << "Welcome to Basic C++ Calculator!" << std::endl;
	std::cout << "1 for +" << std::endl;
	std::cout << "2 for -" << std::endl;
	std::cout << "3 for *" << std::endl;
	std::cout << "4 for /" << std::endl;

	std::cin >> chose;
	if (chose == 1) {
		system("cls");
		int a, b;
		std::cout << "enter first number ";
		std::cin >> a;
		std::cout << "\nenter second number ";
		std::cin >> b;
		std::cout << "\nresult " << a + b << std::endl;
		system("pause");
	}
	else if (chose == 2) {
		system("cls");
		int a, b;
		std::cout << "enter first number ";
		std::cin >> a;
		std::cout << "\nenter second number ";
		std::cin >> b;
		std::cout << "\nresult " << a - b << std::endl;
		system("pause");
	}
	else if (chose == 3) {
		system("cls");
		int a, b;
		std::cout << "enter first number ";
		std::cin >> a;
		std::cout << "\nenter second number ";
		std::cin >> b;
		std::cout << "\nresult " << a * b << std::endl;
		system("pause");
	}
	else if (chose == 4) {
		system("cls");
		int d, v;
		std::cout << "enter first number ";
		std::cin >> d;
		std::cout << "\nenter second number ";
		std::cin >> v;

		if (v != 0) {
			std::cout << "\nresult " << d / v << std::endl;
			system("pause");
		}
		else {
			std::cout << "\nBAD NUMBE 0" << std::endl;
		}
	}
}