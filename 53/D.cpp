#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int A[100000] = {};
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;
		A[Ai-1]++;
		if (A[Ai-1] == 3) A[Ai-1] = 1;
	}

	int ans = 0;
	int two = 0;
	for (int i = 0; i < 100000; i++) {
		if (A[i] > 0) ans++;
		if (A[i] == 2) two++; 
	}

	if (two % 2 == 1) ans--;

	cout << ans << endl;

	return 0;
}