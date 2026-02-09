#include<bits/stdc++.h>
using namespace std;

int N, M;
int _min = 10, make;
int num[10] = {0, };
bool visited[10] = {false, };

void dfs(int cur, int curMake, int cnt) {
    if(curMake==make) {
        _min = min(_min, cnt);
    }

    for(int i=cur;i<N;i++) {
        if(!visited[i]) {
            visited[i]=true;
            dfs(i+1, curMake|num[i], cnt+1);
            visited[i]=false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> M;
    for(int i=0;i<N;i++) {
        string s; cin >> s;
        int cnt=0;
        for(int j=0;j<M;j++) {
            cnt*=2;
            if(s[j]=='o') cnt++;
        }
        num[i] = cnt;
    }
    make = pow(2, M)-1;

    dfs(0, 0, 0);
    cout << _min;
}