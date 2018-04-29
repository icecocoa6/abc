#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, Q;
	cin >> N >> Q;
	vector<int> a(N);

	for (int i = 0; i < Q; i++) {
		int L, R, T;
		cin >> L >> R >> T;
		for (int j = L - 1; j < R; j++) a[j] = T;
	}

	for (auto i : a) cout << i << endl;

	return 0;
}