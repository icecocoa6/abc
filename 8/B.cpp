#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	map<string, int> count;
	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;
		count[S] = count[S] + 1;
	}

	auto m = max_element(begin(count), end(count),
		[](pair<string, int> a, pair<string, int> b) {
			return a.second < b.second;
		});

	cout << m->first << endl;

	return 0;
}