#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int arr[2] = {0, };
        while(n-->0) {
            int tmp; cin >> tmp;
            arr[tmp%2]++;
        }
        cout << min(arr[0], arr[1]) << '\n';
    }
}