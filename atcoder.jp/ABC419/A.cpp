#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    if(s.compare("red")==0) cout << "SSS";
    else if(s.compare("blue")==0) cout << "FFF";
    else if(s.compare("green")==0) cout << "MMM";
    else cout << "Unknown";
}