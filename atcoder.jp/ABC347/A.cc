#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N, K; cin >> N >> K;

    vector<int> v;
    for(int i=0;i<N;i++) {
        int A; cin >> A;
        if(A%K==0) {
            v.push_back(A/K);
        }
    }
    
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
}