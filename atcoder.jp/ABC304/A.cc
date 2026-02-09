#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int minVal = INT_MAX, pos=-1;
    vector<pair<string, int>> v;
    for(int i=0;i<N;i++) {
        string S; cin >> S;
        int A; cin >> A;
        v.push_back(make_pair(S, A));
        if(A<minVal) {
            minVal=A;
            pos=i;
        }
    }

    for(int i=pos;i<N;i++) {
        cout << v[i].first << endl;
    }
    for(int i=0;i<pos;i++) {
        cout << v[i].first << endl;
    }
}