#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	long N;
	cin >> N;
	
	int depth = 0;
	for (long i = N; i > 0; depth++, i /= 2);

	long x = 1;
	if (depth % 2 == 0) {
		while (true) {
			x = 2 * x;
			if (x > N) {
				printf("Aoki\n");
				return 0;
			}

			x = 2 * x + 1;
			if (x > N) {
				printf("Takahashi\n");
				return 0;
			}
		}
	} else {
		while (true) {
			x = 2 * x + 1;
			if (x > N) {
				printf("Aoki\n");
				return 0;
			}

			x = 2 * x;
			if (x > N) {
				printf("Takahashi\n");
				return 0;
			}
		}
	}

	return 0;
}