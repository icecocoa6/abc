#include <iostream>
#include <list>
#include <functional>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	list<int> cards;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		cards.push_back(a);
	}

	cards.sort(greater<int>());

	int ans = 0;
	int sign = 1;
	for (int &a : cards) {
		ans += sign * a;
		sign *= -1;
	}

	cout << ans << endl;

	return 0;
}
