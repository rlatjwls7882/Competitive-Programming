#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    string s[N];
    for(int i=0;i<N;i++) {
        cin >> s[i];
    }

    for(int i=0;i<N;i++) {
        if(s[i].compare("and")==0 || s[i].compare("not")==0 || s[i].compare("that")==0 || s[i].compare("the")==0 || s[i].compare("you")==0) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}