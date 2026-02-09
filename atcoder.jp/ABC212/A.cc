#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int A, B; cin >> A >> B;
    if(A==0) cout << "Silver";
    else if(B==0) cout << "Gold";
    else cout << "Alloy";
}