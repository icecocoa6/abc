#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check(int K, vector<int> &count, vector<int> &rest) {
	int sum = 0, mat = 0;
	for (int i = 0; i < 26; i++) {
		mat += min(rest[i], count[i]);
		sum += count[i];
	}

	return K >= sum - mat;
}

int main(int argc, char *argv[]) {
	int N, K;
	cin >> N >> K;
	string S;
	cin >> S;

	vector<int> count(26);
	for (auto c : S) count[c - 'a'] += 1;

	vector<int> rest = count;

	string T = "";

	for (int i = 0; i < S.size(); i++) {
		int c = S[i] - 'a';
		count[c] -= 1;

		for (int j = 0; j < 26; j++) {
			if (rest[j] == 0) continue;
			rest[j] -= 1;
			
			if (c != j) K -= 1;

			if (check(K, count, rest)) {
				T += j + 'a';
				break;
			}

			if (c != j) K += 1;

			rest[j] += 1;
		}
	}

	cout << T << endl;

	return 0;
}