#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T-->0) {
        int n; cin >> n;
        
        if(n%7==0) {
            cout << n << '\n';
        } else {
            int val, min=3;
            if(n<100) {
                for(int i=14;i<=99;i+=7) {
                    int cnt=0;
                    int tmp1=i, tmp2=n;
                    for(int j=0;j<3;j++) {
                        if(tmp1%10!=tmp2%10) {
                            cnt++;
                        }
                        tmp1/=10; tmp2/=10;
                    }
                    if(cnt<min) {
                        min=cnt;
                        val=i;
                    }
                }
            } else {
                for(int i=105;i<=999;i+=7) {
                    int cnt=0;
                    int tmp1=i, tmp2=n;
                    for(int j=0;j<3;j++) {
                        if(tmp1%10!=tmp2%10) {
                            cnt++;
                        }
                        tmp1/=10; tmp2/=10;
                    }
                    if(cnt<min) {
                        min=cnt;
                        val=i;
                    }
                }
            }
            cout << val << '\n';
        }
    }
}