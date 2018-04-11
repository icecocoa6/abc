#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, M;
	cin >> N >> M;
	vector<int> n(N+1);

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		n[a]++;
		n[b]++;
	}

	for (int i = 1; i <= N; i++) {
		printf("%d\n", n[i]);
	}

	return 0;
}