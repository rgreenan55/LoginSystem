#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string>

// Checks if File Exists
bool fileExists(std::string& fileName) {
	struct stat buffer;
	return stat(fileName.c_str(), &buffer) == 0;
}

// Creates User File is Username is unique.
bool SignUp() {
	std::string fileName, username, password;

	std::cout << "SignUp Form" << std::endl;

	std::cout << "Username: ";
	std::cin >> username;

	std::cout << "Password: ";
	std::cin >> password;

	std::cin.get();

	fileName = "User_" + username + ".txt";

	if (fileExists(fileName)) return false;

	std::ofstream file("User_" + username + ".txt", std::fstream::out);
	file << username << std::endl << password;

	return true;
}