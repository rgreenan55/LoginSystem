#include <iostream>
#include <fstream>
#include <string>

bool Login() {
	std::string username, password;
	std::string fileUsername, filePassword;

	std::cout << "Login Form" << std::endl;

	std::cout << "Username: ";
	std::cin >> username;

	std::cout << "Password: ";
	std::cin >> password;

	std::cin.get();

	std::ifstream read("User_" + username + ".txt", std::fstream::in);
	getline(read, fileUsername);
	getline(read, filePassword);

	if (username == fileUsername && password == filePassword) {
		return true;
	} else {
		return false;
	}
}