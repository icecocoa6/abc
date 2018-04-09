#include <iostream>

using namespace std;

unsigned long L[90];

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	L[0] = 2;
	L[1] = 1;
	for (int i = 2; i <= N; i++) {
		L[i] = L[i-1] + L[i-2];
	}

	cout << L[N] << endl;

	return 0;
}