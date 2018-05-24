#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;

	int a = xb - xa;
	int b = yb - ya;
	int c = xc - xa;
	int d = yc - ya;

	cout << fixed << setprecision(4) << abs(a * d - b * c) * 0.5 << endl;

	return 0;
}