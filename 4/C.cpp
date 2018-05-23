#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	int rotate = (N / 5) % 6;
	int swap = N % 5;

	vector<int> card(6);
	for (int i = 0; i < 6; i++)
		card[i] = (i + rotate) % 6 + 1;

	for (int i = 0; i < swap; i++) {
		int t = card[i];
		card[i] = card[i + 1];
		card[i + 1] = t;
	}

	for (auto c : card) cout << c;
	cout << endl;

	return 0;
}