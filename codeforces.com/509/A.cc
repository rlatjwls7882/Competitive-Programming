#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) {
        arr[i]=1;
    }

    for(int i=1;i<N;i++) {
        for(int j=1;j<N;j++) {
            arr[j] += arr[j-1];
        }
    }
    cout << arr[N-1];
}