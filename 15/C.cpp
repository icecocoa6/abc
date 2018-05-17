#include <iostream>
#include <vector>

using namespace std;


bool check(int v, int idx, vector<vector<int>> &T) {
	if (idx == T.size()) {
		return v != 0;
	}

	bool result = true;
	for (auto t : T[idx]) {
		result &= check(v ^ t, idx + 1, T);
	}

	return result;
}

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	vector<vector<int>> T(N, vector<int>(K));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < K; j++)
			cin >> T[i][j];

	if (check(0, 0, T)) printf("Nothing\n");
	else printf("Found\n");

	return 0;
}