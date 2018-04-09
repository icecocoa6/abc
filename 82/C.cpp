#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	map<long, int> numbers;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		numbers[n]++;
	}

	int ans = 0;
	for (pair<long, int> p : numbers) {
		if (p.second - p.first < 0)
			ans += p.second;
		else
			ans += p.second - p.first;
	}

	cout << ans << endl;

	return 0;
}