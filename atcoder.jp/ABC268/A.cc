#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    set<int> s;
    for(int i=0;i<5;i++) {
        int tmp; cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size();
}