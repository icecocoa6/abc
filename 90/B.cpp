#include <iostream>

using namespace std;

int palindromic(int n) {
	int digits[5];
	for (int i = 0; i < 5; i++) {
		digits[i] = n % 10;
		n /= 10;
	}

	return (digits[0] == digits[4]) && (digits[1] == digits[3]);
}

int main(int argc, char *argv[]) {
	int A, B;

	cin >> A >> B;

	int cnt = 0;
	for (int i = A; i <= B; i++) {
		if (palindromic(i)) cnt++;
	}

	cout << cnt << endl;

	return 0;
}