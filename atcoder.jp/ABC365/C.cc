#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll N, M; cin >> N >> M;

    ll sum=0;
    ll A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
        sum += A[i];
    }
    if(sum<=M) {
        cout << "infinite";
        return 0;
    }

    ll left=0, right=M;
    while(left<right) {
        ll mid = (left+right+1)/2;
        sum=0;
        for(int i=0;i<N;i++) {
            sum += min(A[i], mid);
        }

        if(sum<=M) left=mid;
        else right=mid-1;
    }
    cout << left;
}