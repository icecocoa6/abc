#include <iostream>

int main(int argc, char *argv[]) {
	int a, b;

	std::cin >> a >> b;

	if ((a & 1) && (b & 1)) {
		std::cout << "Odd" << std::endl;
	} else {
		std::cout << "Even" << std::endl;
	}
}