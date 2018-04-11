#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N, W;
	cin >> N >> W;

	vector<vector<int>> value(4);
	long w1, v1;
	cin >> w1 >> v1;
	value[0].push_back(v1);

	for (int i = 1; i < N; i++) {
		int wi, vi;
		cin >> wi >> vi;
		value[wi - w1].push_back(vi);
	}

	for (int i = 0; i < 4; i++)
		sort(begin(value[i]), end(value[i]), greater<int>());

	long ans = 0;
	for (int i = 0; i <= value[0].size(); i++) {
		for (int j = 0; j <= value[1].size(); j++) {
			for (int k = 0; k <= value[2].size(); k++) {
				for (int l = 0; l <= value[3].size(); l++) {
					long w = i * w1 + j * (w1 + 1) + k * (w1 + 2) + l * (w1 + 3);
					if (w > W) continue;

					long v = 0;
					for (int m = 0; m < i; m++) v += value[0][m];
					for (int m = 0; m < j; m++) v += value[1][m];
					for (int m = 0; m < k; m++) v += value[2][m];
					for (int m = 0; m < l; m++) v += value[3][m];
					ans = max(ans, v);
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}
