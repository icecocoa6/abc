#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int A, B, C;

double f(double t) {
	return A * t + B * sin(C * t * M_PI);
}

int main(int argc, char *argv[]) {
	cin >> A >> B >> C;

	double l = 0, h = 200;
	for (int i = 0; i < 100; i++) {
		double m = (l + h) / 2;
		if (f(m) < 100) l = m;
		else h = m;
	}

	cout << fixed << setprecision(20) << l << endl;
}