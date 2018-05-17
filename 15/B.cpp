#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int cnt = 0, sum = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		if (A > 0) {
			cnt++;
			sum += A;
		}
	}

	cout << (sum + cnt - 1) / cnt << endl;

	return 0;
}