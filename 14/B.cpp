#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char *argv[]) {
	int n, X;
	cin >> n >> X;

	bitset<20> bits(X);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (bits[i]) sum += a;
	}

	cout << sum << endl;
	return 0;
}