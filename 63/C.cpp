#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<bool> visited(N * 100 + 1);
	visited[0] = true;
	for (int i = 0; i < N; i++) {
		int s;
		cin >> s;

		for (int i = N * 100 - s; i >= 0; i--) {
			if (visited[i]) visited[i+s] = true;
		}
	}

	for (int i = N * 100; i >= 0; i--) {
		if (i % 10 == 0) continue;
		if (visited[i]) {
			cout << i << endl;
			return 0;
		}
	}

	printf("0\n");
	return 0;
}