#include <iostream>
#include <algorithm>

using namespace std;

int numbers[200001];

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;

	int k = 0;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		if (numbers[n] == 0) k++;
		numbers[n]++;
	}

	sort(begin(numbers), end(numbers));

	int ans = 0;
	for (int i = 0; i < 200001 && K < k; i++) {
		if (numbers[i] > 0) {
			ans += numbers[i];
			k--;
		}
	}

	cout << ans << endl;

	return 0;
}
