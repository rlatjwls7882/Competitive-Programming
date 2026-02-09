#include<bits/stdc++.h>
using namespace std;

int a[200002];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k, x; cin >> n >> k >> x;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a, a+n);

        int left=0, right=x;
        while(left<right) {
            int mid = left+right+1>>1;

            int cnt = max(0, a[0]-mid+1) + max(0, x-a[n-1]-mid+1);
            for(int i=0;i<n-1;i++) cnt += max(0, a[i+1]-a[i]-2*mid+1);

            if(cnt>=k) left=mid;
            else right=mid-1;
        }

        int i=0, cnt=0, pos=0;
        while(cnt<k) {
            if(i==n) {
                if(pos-a[n-1]>=left) {
                    cnt++;
                    cout << pos << ' ';
                }
                pos++;
            } else {
                if(a[i]-pos>=left) {
                    cnt++;
                    cout << pos << ' ';
                    pos++;
                } else {
                    if(left) pos = a[i]+left;
                    i++;
                }
            }
        }
        cout << '\n';
    }
}