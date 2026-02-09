#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    string s[N];
    for(int i=0;i<N;i++) {
        cin >> s[i];
    }

    vector<vector<char>> v(100);
    for(int i=0;i<N;i++) {
        for(int j=0;j<s[N-1-i].length();j++) {
            while(v[j].size()!=i) v[j].push_back('*');
            v[j].push_back(s[N-1-i][j]);
        }
    }

    for(int i=0;i<100;i++) {
        if(v[i].empty()) break;
        for(char ch:v[i]) {
            cout << ch;
        }
        cout << '\n';
    }

}