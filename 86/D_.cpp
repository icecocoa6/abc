#include <iostream>
using namespace std;

int N, K, dots[2001][2001], best;

int count(int x1, int y1, int x2, int y2) {
    return dots[x2][y2] - dots[x2][y1] - dots[x1][y2] + dots[x1][y1];
}

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; ++i) {
        char c;
        int x, y;
        cin >> x >> y >> c;

        if (c == 'W') {  // (x, y, 'W') == (x, y + K, 'B')
            y += K;
        }

        // (x, y) == (x, y + 2 * K) == (x + 2 * K, y)
        dots[x % (2 * K) + 1][y % (2 * K) + 1] += 1;
        // Now, 1 <= x, y <= 2 * K.
    }

    // accumulation
    for (int x = 1; x <= 2 * K; ++x) {
        for (int y = 1; y <= 2 * K; ++y) {
            dots[x][y] += dots[x - 1][y] + dots[x][y - 1] - dots[x - 1][y - 1];
        }
    }

    for (int x = 1; x <= 2 * K; ++x) {
        for (int y = 1; y <= 2 * K; ++y) {
            cout << dots[y][x] << " ";
        }
        cout << endl;
    }

    // For each painting.
    for (int x = 1; x <= K; ++x) {
        for (int y = 1; y <= K; ++y) {
            int sum = 0;
            sum += count(0, 0, x, y);
            sum += count(x, y, K + x, K + y);
            sum += count(K + x, K + y, 2 * K, 2 * K);
            sum += count(K + x, 0, 2 * K, y);
            sum += count(0, K + y, x, 2 * K);
            sum = max(N - sum, sum);
            best = max(best, sum);
        }
    }

    cout << best << endl;
}
