#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string hex = "0123456789ABCDEF";
    int N; cin >> N;
    cout << hex[N/16] << hex[N%16];
}