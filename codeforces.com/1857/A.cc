#include<bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while(t-->0) {
      int n; cin >> n;
      int cntOdd=0;
      while(n-->0) {
          int tmp; cin >> tmp;
          if(tmp%2==1) cntOdd++;
      }
      if(cntOdd%2) cout << "NO\n";
      else cout << "YES\n";
  }
}