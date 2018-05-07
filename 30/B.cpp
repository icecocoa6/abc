#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int n, m;
	cin >> n >> m;
	double N = ((n % 12) + m / 60.0) * 30.0;
	double M = m / 60.0 * 360.0;
	double d = abs(N - M);
	cout << fixed << setprecision(10) << ((d > 180.0) ? (360.0 - d) : d) << endl;
	return 0;
}