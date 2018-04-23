#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char *argv[]) {
	int N, T;
	cin >> N >> T;

	int m = std::numeric_limits<int>::max();
	int benefit = 0;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;

		if (m > Ai) m = Ai;
		if (Ai - m == benefit) cnt++;
		else if (Ai - m > benefit) {
			benefit = Ai - m;
			cnt = 1;
		}
	}

	cout << cnt << endl;

	return 0;
}