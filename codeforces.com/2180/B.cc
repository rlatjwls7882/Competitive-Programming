#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string res="";
        while(n--) {
            string cur; cin >> cur;
            if(cur+res<res+cur) res=cur+res;
            else res+=cur;
        }
        cout << res << '\n';
    }
}