#include <iostream> 

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C;
	cin >> A >> B >> C;

	int ans = 0;
	int M = max(A, max(B, C));

	while (M - A >= 2) { A += 2; ans++; }
	while (M - B >= 2) { B += 2; ans++; }
	while (M - C >= 2) { C += 2; ans++; }

	int m = min(A, min(B, C));
	if (m < A) { A--; ans++; }
	if (m < B) { B--; ans++; }
	if (m < C) { C--; ans++; }

	cout << ans << endl;
	return 0;
}