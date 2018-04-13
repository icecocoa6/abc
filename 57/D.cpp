#include <iostream> 
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

long C[51][51];

int main(int argc, char *argv[]) {
	int N, A, B;
	cin >> N >> A >> B;

	vector<long> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];

	sort(begin(v), end(v), greater<long>());

	for (int n = 0; n <= N; n++) C[n][0] = 1;
	for (int n = 1; n <= N; n++)
		for (int k = 1; k <= n; k++)
			C[n][k] = C[n-1][k-1] + C[n-1][k];

	long sum = 0;
	for (int i = 0; i < A; i++) sum += v[i];
	double avg = (double)sum / A;

	long cnt = 0;
	if (v[0] != v[A - 1]) {
		int n = 0, k = 0;
		for (int i = 0; i < N; i++) {
			if (v[i] != v[A - 1]) continue;
			n++;
			if (i < A) k++;
		}
		cnt = C[n][k];
	} else {
		int n = 0;
		for (int i = 0; i < N; i++)
			if (v[0] == v[i])
				n++;

		for (int k = A; k <= B && k <= n; k++)
			cnt += C[n][k];
	}

	cout << fixed << setprecision(20) << avg << endl;
	cout << cnt << endl;

	return 0;
}