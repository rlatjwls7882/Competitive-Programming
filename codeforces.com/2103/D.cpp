#include<bits/stdc++.h>
using namespace std;

int res[200'000], rootIdx;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<vector<int>> conn(n+1);
        for(int i=0;i<n;i++) {
            int level; cin >> level;
            if(level==-1) rootIdx=i;
            else conn[level].push_back(i);
        }

        int left=1, right=n;
        for(int level=1;level<=n;level++) {
            sort(conn[level].begin(), conn[level].end());
            if(level%2==1) {
                int cnt=0;
                for(int j=0;j<conn[level].size();j++) {
                    int idx = conn[level][j];
                    if(idx<rootIdx) {
                        res[idx] = right-j;
                    } else {
                        res[idx] = right-conn[level].size()+1+cnt;
                        cnt++;
                    }
                }
                right -= conn[level].size();
            } else {
                int cnt=0;
                for(int j=0;j<conn[level].size();j++) {
                    int idx = conn[level][j];
                    if(idx<rootIdx) {
                        res[idx] = left+j;
                    } else {
                        res[idx] = left+conn[level].size()-1-cnt;
                        cnt++;
                    }
                }
                left += conn[level].size();
            }
        }
        res[rootIdx] = left;

        for(int i=0;i<n;i++) cout << res[i] << ' ';
        cout << '\n';
    }
}