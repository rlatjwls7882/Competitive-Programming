#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int solve() {
    int cnt = n;
    if(s[0]=='1') cnt++;

    // 101꼴 -> -2
    // 10꼴 -> -1
    bool first1=false, first0=false, last1=false;
    for(int i=0;i<s.length();i++) {
        if(i>=1 && s[i]!=s[i-1]) cnt++;
        if(s[i]=='1' && first1==false) first1=true;
        else if(s[i]=='0' && first1==true) first0=true;
        else if(s[i]=='1' && first0==true) last1=true;
    }
    if(first1 && first0 && last1) cnt-=2;
    else if(first1 && first0) cnt--;
    return cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n >> s;
        cout << solve() << '\n';
    }
}