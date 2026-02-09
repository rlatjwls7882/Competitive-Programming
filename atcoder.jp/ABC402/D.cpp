#include<bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> lineList;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;

    long long total=0;
    for(int i=0;i<m;i++) {
        int a, b; cin >> a >> b;
        if(a>b) swap(a, b);

        int move = a-1;
        a = 1;
        b = (b+move-1)%n+1;
        total += i - lineList[{a, b}]++;
    }
    cout << total;
}
