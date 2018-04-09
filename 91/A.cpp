#include <iostream>

int main(int argc, char *argv[]) {
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << ((A + B < C) ? "No" : "Yes") << std::endl;
	return 0;
}