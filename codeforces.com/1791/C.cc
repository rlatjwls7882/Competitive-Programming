#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int length; cin >> length;
        string s; cin >> s;

        int start=0, end=length-1, cnt=0;
        while(start<end&&s[start]!=s[end]) {
            start++;
            end--;
            cnt+=2;
        }
        cout << length-cnt << endl;
    }
}