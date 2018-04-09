#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	long long K;
	cin >> K;

	long long A[50];
	for (int i = 0; i < 50; i++) A[i] = i + K / 50;

	for (int i = 0; i < K % 50; i++) {
		A[i] += 51;
		for (int j = 0; j < 50; j++) {
			A[j]--;
		}
	}

	cout << 50 << endl;
	for (int i = 0; i < 50; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}