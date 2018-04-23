#include <iostream>
#include <queue>
#include <cctype>

using namespace std;

int main(int argc, char *argv[]) {
	queue<char> a, b, c;

	string S;
	cin >> S;
	for (char ch : S) a.push(ch);
	cin >> S;
	for (char ch : S) b.push(ch);
	cin >> S;
	for (char ch : S) c.push(ch);

	char turn = 'a';
	while (true) {
		if (turn == 'a') {
			if (a.empty()) break;
			turn = a.front();
			a.pop();
		} else if (turn == 'b') {
			if (b.empty()) break;
			turn = b.front();
			b.pop();
		} else if (turn == 'c') {
			if (c.empty()) break;
			turn = c.front();
			c.pop();
		}
	}

	cout << (char)toupper(turn) << endl;
}