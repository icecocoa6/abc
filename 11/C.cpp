#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	int NG[3];
	cin >> N >> NG[0] >> NG[1] >> NG[2];

	int cnt;
	for (cnt = 0; cnt <= 100; cnt++) {
		if (N <= 0) break;
		if (N == NG[0] || N == NG[1] || N == NG[2]) {
			printf("NO\n");
			return 0;
		}
		N -= 3;

		if (N == NG[0] || N == NG[1] || N == NG[2]) {
			N++;
			if (N == NG[0] || N == NG[1] || N == NG[2]) {
				N++;
			}
		}
	}

	if (cnt <= 100) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}