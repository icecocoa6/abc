#include <iostream>
#include <map> 
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	map<int, int> A;
	for (int i = 0; i < N; i++) {
		int Ai;
		cin >> Ai;
		A[Ai]++;
	}

	long long l = -1, s = -1;
	for (pair<int, int> p : A) {
		int a = p.first, cnt = p.second;
		if (cnt < 2) continue;
		if (cnt >= 2 && l < a) {
			s = l;
			l = a;
			cnt -= 2;
		}
		if (cnt >= 2 && s < a) {
			s = a;
		}
	}

	if (l == -1 || s == -1) cout << "0" << endl;
	else cout << l * s << endl;

	return 0;
}