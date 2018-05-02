#include <iostream>
#include <vector>
#include <queue>

using namespace std;


void dijkstra(vector<long> &ds, vector<vector<pair<int, int>>> &es) {
	priority_queue<pair<long, int>, vector<pair<long, int>>, greater<pair<long, int>>> q;
	for (int i = 0; i < ds.size(); i++) {
		q.push({ds[i], i});
	}

	while (!q.empty()) {
		auto p = q.top(); q.pop();
		auto d = p.first;
		auto v = p.second;
		for (auto e : es[v]) {
			auto u = e.first, c = e.second;
			if (ds[u] <= d + c) continue;
			ds[u] = d + c;
			q.push({d + c, u});
		}
	}
}

int main(int argc, char *argv[]) {
	int N, M, T;
	cin >> N >> M >> T;

	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	vector<vector<pair<int, int>>> es(N);
	vector<vector<pair<int, int>>> es_rev(N);
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		es[a-1].push_back(make_pair(b-1, c));
		es_rev[b-1].push_back(make_pair(a-1, c));
	}

	vector<long> ds(N, 100000000000);
	vector<long> ds_rev(N, 100000000000);
	ds[0] = 0;
	ds_rev[0] = 0;
	dijkstra(ds, es);
	dijkstra(ds_rev, es_rev);

	long ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(ans, A[i] * (T - ds[i] - ds_rev[i]));
	}

	cout << ans << endl;

	return 0;
}