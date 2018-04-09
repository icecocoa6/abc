#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {
	int N, H;
	cin >> N >> H;

	long amax = 0;
	list<long> b;
	for (int i = 0; i < N; i++) {
		long ai, bi;
		cin >> ai >> bi;
		b.push_back(bi);
		if (amax < ai) amax = ai;
	}

	b.sort(greater<long>());

	int atk = 0;
	for (long bi : b) {
		if (bi < amax) break;
		if (H <= 0) break;
		H -= bi;
		atk++;
	}

	if (H > 0)
		atk += (H + amax - 1) / amax;

	cout << atk << endl;

	return 0;
}