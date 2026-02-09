#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int a, b; cin >> a >> b;

    if(a<=0 && 0<=b) {
        cout << "Zero";
    } else if(a>0) {
        cout << "Positive";
    } else {
        if((b-a+1)%2==0) {
            cout << "Positive";
        } else {
            cout << "Negative";
        }
    }
}