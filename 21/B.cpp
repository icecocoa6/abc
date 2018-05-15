#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int a, b;
	int K;
	cin >> N >> a >> b >> K;

	vector<int> P(K);
	for (int i = 0; i < K; i++) cin >> P[i];

	vector<bool> city(N);
	city[a - 1] = city[b - 1] = true;
	for (auto p : P) {
		if (city[p - 1]) {
			printf("NO\n");
			return 0;
		}
		city[p - 1] = true;
	}
	printf("YES\n");
	return 0;
}