#include <iostream>
#include <vector>

using namespace std;

using point = pair<int, int>;

bool intersects(pair<point, point> l1, pair<point, point> l2) {
  auto ax = l1.first.first, ay = l1.first.second;
  auto bx = l1.second.first, by = l1.second.second;
  auto cx = l2.first.first, cy = l2.first.second;
  auto dx = l2.second.first, dy = l2.second.second;
  long ta = (cx - dx) * (ay - cy) + (cy - dy) * (cx - ax);
  long tb = (cx - dx) * (by - cy) + (cy - dy) * (cx - bx);
  long tc = (ax - bx) * (cy - ay) + (ay - by) * (ax - cx);
  long td = (ax - bx) * (dy - ay) + (ay - by) * (ax - dx);

  return tc * td < 0 && ta * tb < 0;
}

int main(int argc, char *argv[]) {
  int Ax, Ay, Bx, By;
  cin >> Ax >> Ay >> Bx >> By;

  int N;
  cin >> N;

  vector<pair<point, point>> line;
  point p0, p;
  cin >> p.first >> p.second;
  p0 = p;
  for (int i = 1; i < N; i++) {
    point p2;
    cin >> p2.first >> p2.second;
    line.push_back({p, p2});
    p = p2;
  }
  line.push_back({p, p0});

  int cnt = 0;
  for (auto l : line)
    if (intersects({{Ax, Ay}, {Bx, By}}, l))
      cnt++;

  cout << cnt / 2 + 1 << endl;

  return 0;
}