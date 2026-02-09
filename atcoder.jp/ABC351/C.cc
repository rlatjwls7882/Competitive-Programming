#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N; cin >> N;

    vector<int> v;
    while(N-->0) {
        int A; cin >> A;
        v.push_back(A);

        while(v.size()>=2 && v[v.size()-1]==v[v.size()-2]) {
            int tmp = v[v.size()-1]+1;
            v.pop_back(); v.pop_back();
            v.push_back(tmp);
        }
    }
    cout << v.size();
}