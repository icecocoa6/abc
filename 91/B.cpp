#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
	map<string, int> cnt;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		cnt[s]++;
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		cnt[s]--;
	}

	int max = 0;
	for(pair<string, int> p : cnt) {
		if (p.second > max) max = p.second;
	}

	cout << max << endl;

	return 0;
}