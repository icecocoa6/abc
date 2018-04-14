#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	string S;
	cin >> S;

	int cnt = 0;
	int ans = 0;
	for (char c : S) {
		if (c == 'I') {
			cnt++;
		} else if (c == 'D') {
			cnt--;
		}
		ans = max(cnt, ans);
	}

	cout << ans << endl;
	return 0;
}