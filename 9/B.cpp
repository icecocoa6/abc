#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int M = 0;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		M = max(M, A[i]);
	}

	sort(begin(A), end(A), greater<int>());

	cout << *upper_bound(begin(A), end(A), M, greater<int>()) << endl;
}