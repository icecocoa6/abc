#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N, Q;
	cin >> N >> Q;

	vector<bool> sw(N+1);
	for (int i = 0; i < Q; i++) {
		int li, ri;
		cin >> li >> ri;
		sw[li - 1] = !sw[li - 1];
		sw[ri] = !sw[ri];
	}

	int c = 0;
	for (int i = 0; i < N; i++) {
		if (sw[i]) c = 1 - c;
		cout << c;
	}
	cout << endl;

	return 0;
}