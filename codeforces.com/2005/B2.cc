#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m, q; cin >> n >> m >> q;
        int b[m+2];
        b[m]=-1; b[m+1]=n+1;
        for(int i=0;i<m;i++) cin >> b[i];
        sort(b, b+m+2);

        while(q-->0) {
            int a; cin >> a;
            int findLeftL=0, findLeftR=m+1;
            while(findLeftL<findLeftR) {
                int mid = (findLeftL+findLeftR+1)/2;
                if(b[mid]>=a) findLeftR=mid-1;
                else findLeftL=mid;
            }

            int findRightL=0, findRightR=m+1;
            while(findRightL<findRightR) {
                int mid = (findRightL+findRightR)/2;
                if(b[mid]<=a) findRightL=mid+1;
                else findRightR=mid;
            }

            int left=b[findLeftL], right=b[findRightL];
            if(left==-1) cout << right-1 << '\n';
            else if(right==n+1) cout << n-left << '\n';
            else cout << (right-left)/2 << '\n';
        }
    }
}