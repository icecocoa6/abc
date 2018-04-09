#include <iostream>

int main(int argc, char *argv[]) {
	int N, A, B;
	std::cin >> N >> A >> B;
	int sum = 0;
	int ans = 0;

	for (int i = 1; i <= N; i++) {
		sum++;
		if (i % 10 == 0) sum -= 9;
		if (i % 100 == 0) sum -= 9;
		if (i % 1000 == 0) sum -= 9;
		if (i % 10000 == 0) sum -= 9;
		if (A <= sum && sum <= B) ans += i;
	}

	std::cout << ans << std::endl;

	return 0;
}