#include <string>
#include <iostream> 

using namespace std;

int main(int argc, char *argv[]) {
	string S;
	cin >> S;
	cout << S.front() << S.size() - 2 << S.back() << endl;
	return 0;
}