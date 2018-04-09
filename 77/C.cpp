#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;

	vector<int> A;
	vector<int> B;
	vector<int> C;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		A.push_back(n);
	}

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		B.push_back(n);
	}

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		C.push_back(n);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	sort(C.begin(), C.end());

	long long ans = 0;
	for (int i = 0; i < B.size(); i++) {
		long long a = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
		long long c = C.end() - upper_bound(C.begin(), C.end(), B[i]);
		ans += a * c;
	}

	cout << ans << endl;

	return 0;
}