#include <iostream> 

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;
	int odd = 0, even = 0, quad = 0;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		if (n % 4 == 0) quad++;
		else if (n % 2 == 0) even++;
		else if (n % 2 != 0) odd++;
	}

	if ((even > 0 && odd <= quad) || (even == 0 && odd <= quad + 1))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}