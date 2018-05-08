#include <iostream>


using namespace std;

int main(int argc, char *argv[]) {
	string N;
	cin >> N;

	int n = stoi(N) + 1;
	int b = 10;
	long ans = 0;
	for (int i = 0; i < N.size(); i++, b *= 10) {
		ans += n / b * (b / 10) + min(max(0, n % b - b / 10), b / 10);
	}

	cout << ans << endl;
	return 0;
}