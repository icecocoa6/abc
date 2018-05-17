#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	printf("%02d:%02d:%02d\n", N / 3600, (N % 3600) / 60, N % 60);
	return 0;
}