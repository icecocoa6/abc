#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool prime[55556];

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	fill(begin(prime), end(prime), true);
	prime[0] = prime[1] = false;
	for (int i = 2; i < 236; i++) {
		if (!prime[i]) continue;
		for (int j = i + i; j < 55556; j += i)
			prime[j] = false;
	}

	vector<int> ans;
	for (int i = 2; i < 55536 && ans.size() < N; i += 5)
		if (prime[i])
			ans.push_back(i);

	for (auto n : ans)
		cout << n << " ";
	cout << endl;

	return 0;
}