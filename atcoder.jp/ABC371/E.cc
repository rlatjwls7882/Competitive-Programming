#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    vector<queue<int>> index(n+1);

    long long cnt=0;
    set<int> nums;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        nums.insert(a[i]);
        index[a[i]].push(i);
        cnt += nums.size();
    }

    long long total = cnt;
    for(int i=0;i<n-1;i++) {
        index[a[i]].pop();
        int nextIdx = n;
        if(!index[a[i]].empty()) nextIdx = index[a[i]].front();

        cnt -= (nextIdx-i);
        total += cnt;
    }
    cout << total;
}