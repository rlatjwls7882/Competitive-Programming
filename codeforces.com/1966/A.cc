#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n, k; cin >> n >> k;
        int cards[101] = {0, };
        for(int i=0;i<n;i++) {
            int c; cin >> c;
            cards[c]++;
        }

        int wild=0;
        for(int i=0;i<2;i++) {
            for(int j=1;j<=100;j++) {
                if(cards[j]>0 && cards[j]+wild>=k) {
                    wild = wild+cards[j]-1;
                    cards[j]=0;
                }
            }
        }

        int sum = min(k-1, wild);
        for(int i=1;i<=100;i++) {
            sum += cards[i];
        }
        cout << sum << endl;
    }
}