#include <iostream>

using namespace std;

static const long MOD = 1000000007;

int main(int argc, char *argv[]) {
	long A, B, C;
	cin >> A >> B >> C;

	cout << ((A * B % MOD) * C % MOD) << endl;

	return 0;
}