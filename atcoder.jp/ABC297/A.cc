#include<bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int N, D; cin >> N >> D;
  int last; cin >> last;
  while(N-->1) {
    int cur; cin >> cur;
    if(cur-last<=D) {
      cout << cur;
      return 0;
    }
    last=cur;
  }
  cout << -1;
}