#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int up[100];
	int dn[100];
	for (int i = 0; i < N; i++) {
		cin >> up[i];
		if (i > 0)
			up[i] += up[i - 1];
	}
	for (int i = 0; i < N; i++) {
		cin >> dn[i];
		if (i > 0)
			dn[i] += dn[i - 1];
	}

	int max;
	for (int i = 0; i < N; i++) {
		int drops = up[i];
		drops += dn[i] - (i > 0 ? dn[i - 1] : 0);
		drops += dn[N - 1] - dn[i];
		if (drops > max) max = drops;
	}

	cout << max << endl;

	return 0;
}