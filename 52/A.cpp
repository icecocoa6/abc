#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int s1 = A * B, s2 = C * D;
	if (s1 > s2) cout << s1 << endl;
	else cout << s2 << endl;
	return 0;
}
