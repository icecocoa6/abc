#include <iostream>
#include <list>

using namespace std;

bool dpx[8000][16001];
bool dpy[8000][16001];
int f[8000];

int main(int argc, char *argv[]) {
	string s;
	int x, y;
	cin >> s >> x >> y;

	int idx = 0;
	for (char &c : s) {
		if (c == 'F') f[idx]++;
		else idx++;
	}
	idx++;

	dpx[1][8000 + f[0]] = true;

	for (int i = 1; 2 * i < idx; i++) {
		for (int j = 0; j < 16001; j++) {
			if (dpx[i][j]) {
				dpx[i + 1][j + f[2 * i]] = true;
				dpx[i + 1][j - f[2 * i]] = true;
			}
		}
	}

	dpy[0][8000] = true;
	for (int i = 0; 2 * i < idx; i++) {
		for (int j = 0; j < 16001; j++) {
			if (dpy[i][j]) {
				dpy[i + 1][j + f[2 * i + 1]] = true;
				dpy[i + 1][j - f[2 * i + 1]] = true;
			}
		}
	}

	if (dpx[(idx + 2 - 1) / 2][x + 8000] && dpy[idx / 2][y + 8000])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}