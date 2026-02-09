#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;

    long long t=0;
    while(n-->0) {
        int h; cin >> h;
        t += h/5*3; h%=5;

        while(h>0) {
            if(++t%3==0) h-=3;
            else h--;
        }
    }
    cout << t;
}