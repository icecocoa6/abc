#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;
	unsigned long p = 1 << M;
	cout << (1900 * M + 100 * (N - M)) * p << endl;
	return 0;
}