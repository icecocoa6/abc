#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int sum = 0;

	int x = N;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}

	if (N % sum == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}