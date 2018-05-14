#include <iostream>
#include <set>

using namespace std;

int main(int argc, char *argv[]) {
	int N;

	cin >> N;
	set<int> cnt;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;

		while (a % 2 == 0) a /= 2;

		cnt.insert(a);
	}

	cout << cnt.size() << endl;

	return 0;
}