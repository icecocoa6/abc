#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, A, B;

	cin >> N >> A >> B;

	long ans = 0;
	for (int i = 1; i <= N; i++) {
		int sum = 0;
		sum += i % 10;
		sum += (i / 10) % 10;
		sum += (i / 100) % 10;
		sum += (i / 1000) % 10;
		sum += (i / 10000) % 10;
		if (A <= sum && sum <= B) ans += i;
	}

	cout << ans << endl;

	return 0;
}