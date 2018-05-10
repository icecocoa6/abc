#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int N, A, B;
	cin >> N >> A >> B;

	int pos = 0;
	for (int i = 0; i < N; i++) {
		string s;
		int d;
		cin >> s >> d;
		if (s == "East") {
			pos += min(B, max(A, d));
		} else if (s == "West") {
			pos -= min(B, max(A, d));
		}
	}

	if (pos > 0) printf("East ");
	else if (pos < 0) printf("West ");

	cout << abs(pos) << endl;

	return 0;
}