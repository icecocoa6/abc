#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;

	cin >> N;

	int i;
	for (i = 0; i * i <= N; i++);

	cout << (i - 1) * (i - 1) << endl;

	return 0;
}