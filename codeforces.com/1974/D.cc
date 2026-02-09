#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; string s; cin >> n >> s;

        int cnt[4] = {0, };
        for(int i=0;i<n;i++) {
            if(s[i]=='N') {
                cnt[0]++;
            } else if(s[i]=='S') {
                cnt[1]++;
            } else if(s[i]=='E') {
                cnt[2]++;
            } else {
                cnt[3]++;
            }
        }

        int sameNS=min(cnt[0], cnt[1]); cnt[0]-=sameNS; cnt[1]-=sameNS;
        int sameEW=min(cnt[2], cnt[3]); cnt[2]-=sameEW; cnt[3]-=sameEW;
        if(cnt[0]%2==1 || cnt[1]%2==1 || cnt[2]%2==1 || cnt[3]%2==1 || (cnt[0]<2&&cnt[1]<2&&cnt[2]<2&&cnt[3]<2&&sameEW+sameNS<2)) {
            cout << "NO\n";
        } else {
            int idxN=0, idxS=0, idxE=0, idxW=0;
            for(int i=0;i<n;i++) {
                if(s[i]=='N') {
                    if(idxN<sameNS && idxN%2==0) {
                        idxN++;
                        cout << "R";
                    } else if(idxN<sameNS) {
                        idxN++;
                        cout << "H";
                    } else if(cnt[0]--%2==0) {
                        cout << "R";
                    } else {
                        cout << "H";
                    }
                } else if(s[i]=='S') {
                    if(idxS<sameNS && idxS%2==0) {
                        idxS++;
                        cout << "R";
                    } else if(idxS<sameNS) {
                        idxS++;
                        cout << "H";
                    } else if(cnt[1]--%2==0) {
                        cout << "R";
                    } else {
                        cout << "H";
                    }
                } else if(s[i]=='E') {
                    if(idxE<sameEW && idxE%2==0) {
                        idxE++;
                        cout << "H";
                    } else if(idxE<sameEW) {
                        idxE++;
                        cout << "R";
                    } else if(cnt[2]--%2==0) {
                        cout << "R";
                    } else {
                        cout << "H";
                    }
                } else {
                    if(idxW<sameEW && idxW%2==0) {
                        idxW++;
                        cout << "H";
                    } else if(idxW<sameEW) {
                        idxW++;
                        cout << "R";
                    } else if(cnt[3]--%2==0) {
                        cout << "R";
                    } else {
                        cout << "H";
                    }
                }
            }
            cout << '\n';
        }
    }
}