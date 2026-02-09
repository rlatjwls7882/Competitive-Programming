#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    
    while(t-->0) {
        string s; cin >> s;
        
        bool chk=true;
        for(int i=0;i<s.length();i++) {
            if(s[i]!='Y'&&s[i]!='e'&&s[i]!='s' || i+1<s.length()&&s[i]==s[i+1] || i+1<s.length()&&s[i]=='e'&&s[i+1]=='Y' || i+1<s.length()&&s[i]=='s'&&s[i+1]=='e' || i+1<s.length()&&s[i]=='Y'&&s[i+1]=='s') {
                chk=false;
                break;
            }
        }

        if(chk) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}