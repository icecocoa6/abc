#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char * argv[]) {
	int N;
	cin >> N;

	vector<int> cards;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		cards.push_back(n);
	}

	sort(cards.begin(), cards.end(), greater<int>());

	int sign = 1;
	int pt = 0;
	for (int i = 0; i < cards.size(); i++, sign *= -1) {
		pt += sign * cards[i];
	}

	cout << pt << endl;

	return 0;
}