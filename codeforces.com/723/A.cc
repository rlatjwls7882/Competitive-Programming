#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  int s = min(min(x1, x2), x3);
  int e = max(max(x1, x2), x3);

  int minDist = 300;
  while (s <= e) {
    minDist = min(minDist, abs(s - x1) + abs(s - x2) + abs(s - x3));
    s++;
  }

  cout << minDist;
}