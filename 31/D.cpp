#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool check(vector<int> &s_len, vector<string> &s, vector<pair<string, string>> &vw) {
	for (auto p : vw) {
		auto v = p.first, w = p.second;
		int length = 0;
		for (auto c : v)
			length += s_len[c - '1'];

		if (length != w.size()) return false;

		int idx = 0;
		for (auto c : v) {
			int len = s_len[c - '1'];
			string t = w.substr(idx, len);
			if (!s[c - '1'].empty() && s[c - '1'] != t) return false;
			s[c - '1'] = t;
			idx += len;
		}
	}
	return true;
}

bool solve(vector<int> &s_len, int idx, vector<string> &s, vector<pair<string, string>> &vw) {
	if (idx == s_len.size()) {
		if (check(s_len, s, vw)) return true;
		for (auto &t : s) t.clear();
		return false;
	}

	for (int i = 1; i <= 3; i++) {
		s_len[idx] = i;
		if (solve(s_len, idx + 1, s, vw))
			return true;
	}

	return false;
}

int main(int argc, char *argv[]) {
	int K, N;
	cin >> K >> N;

	vector<pair<string, string>> vw(N);
	for (int i = 0; i < N; i++)
		cin >> vw[i].first >> vw[i].second;

	vector<int> s_len(K);
	vector<string> s(K);
	solve(s_len, 0, s, vw);

	for (auto ss : s) cout << ss << endl;

	return 0;
}
