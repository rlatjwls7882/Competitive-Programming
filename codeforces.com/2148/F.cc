#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b, int startIdx) {
    if(a.size()<=startIdx) return true;
    if(b.size()<=startIdx) return false;
    for(int i=startIdx;i<a.size() && i<b.size();i++) {
        if(a[i]!=b[i]) return a[i] > b[i];
    }
    return a.size()>b.size();
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int maxLen=0;
        vector<vector<int>> grid(n);
        for(int i=0;i<n;i++) {
            int k; cin >> k;
            maxLen = max(maxLen, k);
            while(k--) {
                int a; cin >> a;
                grid[i].push_back(a);
            }
        }

        for(int i=0;i<maxLen;) {
            int maxIdx=0;
            for(int j=1;j<n;j++) {
                if(comp(grid[maxIdx], grid[j], i)) maxIdx=j;
            }
            for(int j=i;j<grid[maxIdx].size();j++) cout << grid[maxIdx][j] << ' ';
            i = grid[maxIdx].size();
        }
        cout << '\n';
    }
}
