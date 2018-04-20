#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	long T, A;
	cin >> N;
	cin >> T >> A;
	for (int i = 1; i < N; i++) {
		long Ti, Ai;
		cin >> Ti >> Ai;
		long k = max((T + Ti - 1) / Ti, (A + Ai - 1) / Ai);
		T = k * Ti;
		A = k * Ai;
	}
	cout << T + A << endl;
	return 0;
}