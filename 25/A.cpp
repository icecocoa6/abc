#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	int N;
	cin >> N;
	N--;
	cout << S[N / 5] << S[N % 5] << endl;
	return 0;
}