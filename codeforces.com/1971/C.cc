#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int t; cin >> t;
    while(t-->0) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a>b) {
            int tmp=a;
            a=b;
            b=tmp;
        }
        if(c>d) {
            int tmp=c;
            c=d;
            d=tmp;
        }

        if(a<c&&d<b || c<a&&b<d || b<c || a>d) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}