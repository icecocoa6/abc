#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, K;
	cin >> A >> B >> C >> K;
	if (B < C) swap(B, C);
	if (A < B) swap(A, B);
	cout << (A << K) + B + C << endl;
	return 0;
}