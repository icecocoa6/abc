#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int L, H, N;
	cin >> L >> H >> N;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		if (A > H) printf("-1\n");
		else if (L > A) printf("%d\n", L - A);	
		else printf("0\n");
	}

	return 0;
}