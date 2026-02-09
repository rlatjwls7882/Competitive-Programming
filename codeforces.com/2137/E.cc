#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n), cnt(n+2);
        for(int i=0;i<n;i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int goal;
        for(int i=0;i<5;i++) {
            if(k) {
                goal=n+1;
                for(int i=0;i<=n;i++) {
                    if(cnt[i]==0) {
                        goal=i;
                        break;
                    }
                }

                for(int i=0;i<n;i++) {
                    if(goal<a[i] || cnt[a[i]]!=1) {
                        a[i]=goal;
                    }
                }

                cnt = vector<int>(n+2);
                for(int i=0;i<n;i++) cnt[a[i]]++;

                goal=n+1;
                for(int i=0;i<=n;i++) {
                    if(cnt[i]==0) {
                        goal=i;
                        break;
                    }
                }
                k--;
            }
        }

        ll sum=0;
        for(int i=0;i<n;i++) {
            if(k%2==0 || cnt[a[i]]==1) sum += a[i];
            else sum += goal;
        }
        cout << sum << '\n';
    }
}
