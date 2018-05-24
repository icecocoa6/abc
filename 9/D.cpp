#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using mat = vector<vector<uint32_t>>;
using vec = vector<uint32_t>;


vec mul(mat A, vec x) {
	int N = x.size();
	vec v(N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N ; j++)
			v[i] ^= A[i][j] & x[j];
	return v;
}

mat mul(mat A, mat B) {
	int N = A.size();
	mat X(N, vec(N));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			for (int k = 0; k < N; k++)
				X[i][j] ^= A[i][k] & B[k][j];
	return X;
}

mat pow(mat A, int n) {
	if (n == 0) {
		int N = A.size();
		mat I(N, vec(N));
		for (int i = 0; i < N; i++) I[i][i] = ~0;
		return I;
	}

	if (n % 2 == 0) return pow(mul(A, A), n / 2);
	else return mul(A, pow(A, n - 1));
}

int main(int argc, char *argv[]) {
	int K, M;
	cin >> K >> M;

	vector<uint32_t> A(K), C(K);
	for (int i = 0; i < K; i++) cin >> A[i];
	for (int i = 0; i < K; i++) cin >> C[i];

	vector<vector<uint32_t>> X(K, vector<uint32_t>(K));
	for (int i = 0; i < K; i++) X[K - 1][K - 1 - i] = C[i];
	for (int i = 0; i < K - 1; i++)
		X[i][i + 1] = ~0;

	vec v = mul(pow(X, M - 1), A);
	cout << v[0] << endl;
	return 0;
}