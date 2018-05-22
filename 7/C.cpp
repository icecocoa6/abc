#include <iostream>
#include <queue>
#include <tuple>

using namespace std;
using node = tuple<int, int, int>;

int main(int argc, char *argv[]) {
	int R, C;
	cin >> R >> C;
	int sx, sy, tx, ty;
	cin >> sy >> sx >> ty >> tx;
	sx--, sy--, tx--, ty--;

	vector<string> c(R);
	for (int i = 0; i < R; i++)
		cin >> c[i];

	vector<vector<int>> d(R, vector<int>(C, 1000000));
	queue<node> q;
	q.push(node(sx, sy, 0));
	while (!q.empty()) {
		node n = q.front(); q.pop();
		int x = get<0>(n);
		int y = get<1>(n);
		int s = get<2>(n);

		if (d[y][x] <= s) continue;

		d[y][x] = s;

		if (x == tx && y == ty) break;

		if (c[y][x - 1] == '.') q.push(node(x - 1, y, s + 1));
		if (c[y - 1][x] == '.') q.push(node(x, y - 1, s + 1));
		if (c[y][x + 1] == '.') q.push(node(x + 1, y, s + 1));
		if (c[y + 1][x] == '.') q.push(node(x, y + 1, s + 1));
	}

	cout << d[ty][tx] << endl;

	return 0;
}