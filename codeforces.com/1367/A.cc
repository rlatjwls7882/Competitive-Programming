#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();

    int N; cin >> N;
    while(N-->0) {
        string s; cin >> s;
        for(int i=0;i<s.length()-1;i++) {
            cout << s[i];
            if(s[i]==s[i+1]) {
                i++;
            }
        }
        cout << s[s.length()-1] << endl;
    }
}