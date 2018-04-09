#include <iostream>

using namespace std;



int main(int argc, char *argv[]) {
	int c[9];

	for (int i = 0; i < 9; i++)
		cin >> c[i];

	int da1 = c[1] - c[0];
	int da2 = c[4] - c[3];
	int da3 = c[7] - c[6];
	int db1 = c[2] - c[1];
	int db2 = c[5] - c[4];
	int db3 = c[8] - c[7];
	int dc1 = c[3] - c[0];
	int dc2 = c[4] - c[1];
	int dc3 = c[5] - c[2];
	int dd1 = c[6] - c[3];
	int dd2 = c[7] - c[4];
	int dd3 = c[8] - c[5];

	if (da1 == da2 && da1 == da3 && db1 == db2 && db2 == db3 && dc1 == dc2 && dc2 == dc3 && dd1 == dd2 && dd2 == dd3) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}