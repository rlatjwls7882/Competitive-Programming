#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, K; cin >> N >> K;
    int arr[N];
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    for(int i=0;i<N;i++) {
        if(i+K<N) {
            cout << arr[i+K] << " ";
        } else {
            cout << 0 << " ";
        }
    }
}