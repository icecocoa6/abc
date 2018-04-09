#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	string a, b;
	cin >> a >> b;

	int n = atoi((a + b).c_str());
	for (int i = 0; i <= sqrt(n); i++) {
		if (i * i == n) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}