#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int t; cin >> t;
    bool ans;
    while(t-->0) {
        int n; cin >> n;

        string s="";
        while(s.length()<n) {
            cout << "? " << s << '0' << '\n';
            cin >> ans;
            if(ans) {
                s+='0';
                continue;
            }
            cout << "? " << s << '1' << '\n';
            cin >> ans;
            if(ans) {
                s+='1';
                continue;
            }
            break;
        }
        while(s.length()<n) {
            cout << "? " << '0' << s << '\n';
            cin >> ans;
            if(ans) {
                s='0'+s;
                continue;
            }
            s='1'+s;
        }
        cout << "! " << s << '\n';
    }
}