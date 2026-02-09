#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;
        for(int i=0;i<n;) {
            if(i+2==n-1 && s[i+2]=='0' || i+3<n && s[i+2]=='0' && s[i+3]!='0') {
                cout << char((s[i]-'0')*10+(s[i+1]-'0')-1+'a');
                i+=3;
            } else if(i+1<n && s[i+1]=='0') {
                cout << char((s[i]-'0')*10-1+'a');
                i+=2;
            } else {
                cout << char((s[i]-'1')+'a');
                i++;
            }
        }
        cout << '\n';
    }
}