#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int A, B; cin >> A >> B;
    
    int SA = A/100+A%100/10+A%10;
    int SB = B/100+B%100/10+B%10;
    cout << max(SA, SB);
}