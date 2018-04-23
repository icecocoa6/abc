#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;

	long ans = 0;	
	for (int i = 0; i < (1 << (S.size() - 1)); i++) {
		long n = 0;
		for (int j = 0; j < S.size(); j++) {
			n *= 10;
			n += S[j] - '0';
			if (i & (1 << j)) {
				ans += n;
				n = 0;
			}
		}
		ans += n;
	}

	cout << ans << endl;
	return 0;
}