#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	int N, a;
	cin >> N >> a;
	string K;
	cin >> K;
	vector<int> b(N);
	for (int i = 0; i < N; i++) cin >> b[i];

	if (K.size() < 5) {
		int k = stoi(K);

		for (int i = 0; i < k; i++)
			a = b[a - 1];

		cout << a << endl;
	} else {
		vector<int> visited(N);
		vector<int> cycle;
		int T = 0, C = 0;
		bool cycling = false;

		for (int i = 0; i <= 2 * N; i++) {
			if (visited[a - 1] == 1) {
				if (T == 0) T = i;
				cycle.push_back(a);
			} else if (C == 0 && visited[a - 1] == 2) {
				C = i - T;
				break;
			}
			visited[a - 1] += 1;
			a = b[a - 1];
		}

		T -= C;
		int k_mod_C = 0;
		for (int i = 0; i < K.size(); i++) {
			k_mod_C = (k_mod_C * 10 + K[i] - '0') % C;
		}
		k_mod_C -= T;
		while (k_mod_C < 0) k_mod_C += C;

		cout << cycle[k_mod_C] << endl;
	}
	return 0;
}