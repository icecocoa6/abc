#include <iostream>

int main(int argc, char *argv[]) {
	int N, Y;
	std::cin >> N >> Y;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N - i; j++) {
			if (10000 * i + 5000 * j + 1000 * (N - (i + j)) == Y) {
				std::cout << i << " " << j << " " << N - (i + j) << std::endl;
				return 0;
			}
		}
	}

	std::cout << "-1 -1 -1" << std::endl;

	return 0;
}
