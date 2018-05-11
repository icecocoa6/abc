#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	vector<bool> pollination(100000);

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		A--;
		if (pollination[A]) ans++;
		else pollination[A] = true;
	}

	cout << ans << endl;
	return 0;
}