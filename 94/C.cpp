#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<int> X(N), Y(N);
	for (int i = 0; i < N; i++) {
		cin >> X[i];
		Y[i] = X[i];
	}

	sort(begin(X), end(X));

	for (int i = 0; i < N; i++) {
		if (Y[i] < X[N/2]) cout << X[N/2] << endl;
		else cout << X[N/2-1] << endl;
	}

	return 0;
}