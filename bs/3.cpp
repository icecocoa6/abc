#include <iostream>

int main(int argc, char *argv[]) {
	char c;
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		std::cin >> c;
		if (c == '1') cnt++;
	}

	std::cout << cnt << std::endl;
	return 0;
}
