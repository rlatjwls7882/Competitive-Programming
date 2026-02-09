#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; string s; cin >> n >> s;
        bool used[26] = {false, };
        for(int i=0;i<n;i++) {
            used[s[i]-'a']=true;
        }

        char arr[n]; int idx=0;
        for(int i=0;i<26;i++) {
            if(used[i]) {
                arr[idx++]=i+'a';
            }
        }

        map<char, char> m;
        for(int i=0;i<(idx+1)/2;i++) {
            m.insert(pair<char, char>(arr[i], arr[idx-1-i]));
            m.insert(pair<char, char>(arr[idx-1-i], arr[i]));
        }

        for(int i=0;i<n;i++) {
            cout << m[s[i]];
        }
        cout << '\n';
    }
}