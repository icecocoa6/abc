#include <iostream> 
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	map<int, int> A;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;
		A[Ai]++;
	}

	int ans = 0;
	for (auto p : A) {
		if (p.second % 2 == 1) ans++;
	}

	cout << ans << endl;

	return 0;
}