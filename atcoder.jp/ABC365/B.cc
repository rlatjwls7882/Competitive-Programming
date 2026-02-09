#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    vector<pair<int, int>> v;
    for(int i=1;i<=N;i++) {
        int A; cin >> A;
        v.push_back({A, i});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    cout << v[1].second;
}