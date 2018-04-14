#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int X;
	cin >> X;

	int s = 0;
	int t = 0;
	while (s < X) {
		s += t;
		t++;
	}
	cout << t - 1 << endl;
	return 0;
}