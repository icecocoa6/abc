#include <iostream>

using namespace std;

int vv(int m) {
	if (m < 100) return 0;
	if (m <= 5000) return m / 100;
	if (6000 <= m && m <= 30000) return m / 1000 + 50;
	if (35000 <= m && m <= 70000) return (m / 1000 - 30) / 5 + 80;
	return 89;
}

int main(int argc, char *argv[]) {
	int m;
	cin >> m;
	printf("%02d\n", vv(m));
	return 0;
}