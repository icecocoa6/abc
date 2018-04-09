#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {
	list<int> nums;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		nums.push_back(n);
	}
	nums.sort();
	nums.unique();
	cout << nums.size() << endl;
	return 0;
}