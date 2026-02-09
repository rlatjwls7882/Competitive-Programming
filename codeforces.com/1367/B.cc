#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        
        int notMatchOdd=0, notMathEven=0;
        for(int i=0;i<n;i++) {
            int num; cin >> num; num%=2;
            if(i%2!=num) {
                if(num==1) {
                    notMatchOdd++;
                } else {
                    notMathEven++;
                }
            }
        }
        if(notMatchOdd==notMathEven) {
            cout << notMatchOdd << endl;
        } else {
            cout << "-1\n";
        }
    }
}