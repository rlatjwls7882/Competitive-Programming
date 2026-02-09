#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b; char ch; cin >> a >> ch >> b;
    if(++b==9) a++, b=1;
    cout << a << '-' << b;
}