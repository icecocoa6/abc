#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, K;
	cin >> A >> B >> K;

	int la = A, ra = A + K - 1;
	int lb = B - K + 1, rb = B;

	if (ra > B) ra = B;
	if (ra >= lb) lb = ra + 1;

	for (int i = la; i <= ra; i++) cout << i << endl;
	for (int i = lb; i <= rb; i++) cout << i << endl;

	return 0;
}