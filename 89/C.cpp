#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	long name_cnt[5] = {};

	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;

		if (s[0] == 'M') name_cnt[0]++;
		if (s[0] == 'A') name_cnt[1]++;
		if (s[0] == 'R') name_cnt[2]++;
		if (s[0] == 'C') name_cnt[3]++;
		if (s[0] == 'H') name_cnt[4]++;
	}

	long ans = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			for (int k = j + 1; k < 5; k++) {
				ans += name_cnt[i] * name_cnt[j] * name_cnt[k];
			}
		}
	}

	cout << ans << endl;

	return 0;
}