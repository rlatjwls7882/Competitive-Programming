#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int Y; cin >> Y;
    if(Y%4==0 && Y%100!=0 || Y%400==0) cout << 366;
    else cout << 365;
}