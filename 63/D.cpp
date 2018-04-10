#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool destroyed(vector<int> &hs, long long A, long long B, long long k) {
	long long n = 0;
	long long d = A - B;
	for (auto h : hs) {
		if (h > B * k)
			n += (h - B * k + d - 1) / d;
	}
	return n <= k;
}

int main(int argc, char *argv[]) {
	int N, A, B;
	cin >> N >> A >> B;

	vector<int> h(N);
	for (int i = 0; i < N; i++) cin >> h[i];

	sort(begin(h), end(h));

	long long l = 0, r = 10000000001;
	while (l + 1 < r) {
		long long m = l + (r - l) / 2;
		if (destroyed(h, A, B, m)) {
			r = m;
		} else {
			l = m;
		}
	}

	cout << r << endl;

	return 0;
}