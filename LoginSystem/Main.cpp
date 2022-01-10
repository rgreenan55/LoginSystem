#include <iostream>
#include <string>
#include "Login.h"
#include "SignUp.h"
#include "Util.h"

/*
	Future Implementation Ideas:
	> Functionality for Logged In User (Nothing Complex)
	> Log out Functionality
	> Store Usernames / Passwords in a data structure + file.
	> Encrypt Passwords
*/

int main() {
	int input;

	while (true) {
		input = 0;

		std::cout << "Select Option" << std::endl;
		std::cout << "1. Login" << std::endl;
		std::cout << "2. Sign up" << std::endl;
		std::cout << "3. Exit" << std::endl;
		std::cout << "\n> ";
		std::cin >> input;
		clearScreen();

		if (input == 1) {
			if (Login()) {
				std::cout << "Successful Login" << std::endl;
				break;
			}
			else {
				std::cout << "Unsuccessful Login" << std::endl;
				std::cout << "Press <Enter> to Continue" << std::endl;
				std::cin.get();
				clearScreen();
			}
		}
		else if (input == 2) {
			if (SignUp()) {
				std::cout << "Successful SignUp" << std::endl;
				std::cout << "Press <Enter> to Continue" << std::endl;
				std::cin.get();
				clearScreen();
			}
			else {
				std::cout << "Unsuccessful SignUp" << std::endl;
				std::cout << "Press <Enter> to Continue" << std::endl;
				std::cin.get();
				clearScreen();
			}
		}
		else if (input == 3) {
			std::cout << "Exiting Program" << std::endl;
			break;
		} else {
			std::cout << "Invalid Input" << std::endl;
			std::cout << "Press <Enter> to Continue" << std::endl;
			std::cin.get();
		}
	}
}