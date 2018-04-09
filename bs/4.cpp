#include <iostream>

int main(int argc, char *argv[]) {
	int N;
	int min = 128;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		int m = 0;
		std::cin >> a;
		while (!(a & 1)) {
			a >>= 1;
			m++;
		}
		if (m < min) min = m;
	}

	std::cout << min << std::endl;

	return 0;
}