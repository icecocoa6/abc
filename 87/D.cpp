#include <iostream>
#include <list>

using namespace std;

typedef pair<int, int> edge;

struct Node {
	list<edge> neighbors;
	int pos;
	bool checked;
	bool visited;
};

Node x[100001];

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;

	list<int> open;
	for (int i = 0; i < M; i++) {
		int L, R, D;
		cin >> L >> R >> D;
		x[L].neighbors.push_back(edge(R, D));
		x[R].neighbors.push_back(edge(L, -D));
		open.push_back(L);
	}

	while (!open.empty()) {
		int p = open.front(); open.pop_front();
		if (x[p].visited) continue;
		x[p].visited = true;
		if (!x[p].checked) {
			x[p].checked = true;
			x[p].pos = 0;
		}

		for (edge e : x[p].neighbors) {
			if (x[e.first].checked && x[e.first].pos != x[p].pos + e.second) {
				cout << "No" << endl;
				return 0;
			}
			x[e.first].pos = x[p].pos + e.second;
			x[e.first].checked = true;
			open.push_front(e.first);
		}
	}

	cout << "Yes" << endl;

	return 0;
}