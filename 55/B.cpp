#include <iostream>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	int N;
	long power = 1;
	cin >> N;
	for (int i = 1; i <= N; i++)
		power = (power * i) % MOD;

	cout << power << endl;
	return 0;
}
