#include <iostream> 
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	int N;
	cin >> N;

	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	long ans_pos = 0;
	long sum = 0;
	for (int i = 0; i < N; i++) {
		sum += a[i];
		if (i % 2 == 1 && sum >= 0) {
			ans_pos += sum + 1;
			sum = -1;
		} else if (i % 2 == 0 && sum <= 0) {
			ans_pos += -sum + 1;
			sum = 1;
		}
	}

	long ans_neg = 0;
	sum = 0;
	for (int i = 0; i < N; i++) {
		sum += a[i];
		if (i % 2 == 0 && sum >= 0) {
			ans_neg += sum + 1;
			sum = -1;
		} else if (i % 2 == 1 && sum <= 0) {
			ans_neg += -sum + 1;
			sum = 1;
		}
	}

	cout << min(ans_pos, ans_neg) << endl;
	return 0;
}