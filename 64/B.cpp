#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int m = 1000, M = 0;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		m = min(m, a);
		M = max(M, a);
	}

	cout << M - m << endl;
	return 0;
}