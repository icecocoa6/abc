#include <iostream>

using namespace std;

long f(long n, long x) {
	if (n == -1) return 0;
	return n / x + 1;
}

int main(int argc, char *argv[]) {
	long a, b, x;
	cin >> a >> b >> x;

	cout << f(b, x) - f(a - 1, x) << endl;

	return 0;
}