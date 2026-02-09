#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;
    string s; cin >> s;
    
    for(int i=0;i<N;i++) {
        cout << s[i] << s[i];
    }
}