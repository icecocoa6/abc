#include <iostream>

int main(int argc, char *argv[]) {
	int N, A;
	std::cin >> N >> A;
	std::cout << ((N % 500 <= A) ? "Yes" : "No") << std::endl;
	return 0;
}