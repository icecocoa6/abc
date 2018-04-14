#include <iostream>
#include <vector>
#include <limits>

using namespace std;


int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	vector<long> d(N);
	vector<vector<pair<int, long>>> es(N);

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		es[a-1].push_back(make_pair(b-1, -c));
	}

	for (int i= 0; i < N; i++) d[i] = numeric_limits<long>::max();
	d[0] = 0;

	for (int i = 0; i < N - 1; i++) {
		for (int u = 0; u < N; u++) {
			for (auto &e : es[u]) {
				auto v = e.first;
				auto c = e.second;

				if (d[u] == numeric_limits<long>::max()) continue;
				if (d[v] > d[u] + c) d[v] = d[u] + c;
			}
		}
	}

	vector<bool> neg(N);
	for (int i = 0; i < N; i++) {
		for (int u = 0; u < N; u++) {
			for (auto &e : es[u]) {
				auto v = e.first;
				auto c = e.second;

				if (d[u] == numeric_limits<long>::max()) continue;
				if (d[v] > d[u] + c) {
					d[v] = d[u] + c;
					neg[v] = true;
				}
				if (neg[u]) neg[v] = true;
			}
		}
	}

	if (neg[N-1]) cout << "inf" << endl;
	else cout << -d[N-1] << endl;

	return 0;
}