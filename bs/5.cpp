#include <iostream>

int main(int argc, char *argv[]) {
	int a, b, c, x;
	std::cin >> a >> b >> c >> x;

	int ans = 0;
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			if (500 * i + 100 * j <= x && x <= 500 * i + 100 * j + 50 * c) ans++;
		}
	}

	std::cout << ans << std::endl;

	return 0;
}