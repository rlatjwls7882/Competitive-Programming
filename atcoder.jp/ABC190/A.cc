#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int A, B, C; cin >> A >> B >> C;
    if(C==1) {
        if(A>=B) {
            cout << "Takahashi";
        } else {
            cout << "Aoki";
        }
    } else {
        if(A>B) {
            cout << "Takahashi";
        } else {
            cout << "Aoki";
        }
    }
}