#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int m = 2025 - N;

	vector<pair<int, int>> ans;
	for (int i = 1; i <= 9; i++) {
		if (m % i == 0 && m / i <= 9) {
			cout << i << " x " << m / i << endl;
		}
	}
	return 0;
}