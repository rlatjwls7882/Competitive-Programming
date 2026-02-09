#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string pi = "314159265358979323846264338327950288419716939937510582097494459230781640628";

    int t; cin >> t;
    while(t-->0) {
        string input; cin >> input;

        int cnt=0;
        for(int i=0;i<input.length();i++) {
            if(input[i]!=pi[i]) {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}