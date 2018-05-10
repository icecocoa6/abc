#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

bool check(long X, vector<long> &H, vector<long> &S) {
	int N = H.size();
	vector<long> T(N);
	for (int i = 0; i < N; i++) {
		if (X - H[i] < 0) return false;
		T[i] = (X - H[i]) / S[i];
	}

	sort(begin(T), end(T));

	for (int i = 0; i < N; i++)
		if (i > T[i])
			return false;

	return true;
}

int main(int argc, char *argv[]) {
	int N;

	cin >> N;
	vector<long> H(N), S(N);
	for (int i = 0; i < N; i++)
		cin >> H[i] >> S[i];

	long l = 0, r = numeric_limits<long>::max();
	while (r - l > 1) {
		long m = l + (r - l) / 2;
		if (check(m, H, S)) r = m;
		else l = m;
	}

	cout << r << endl;

	return 0;
}