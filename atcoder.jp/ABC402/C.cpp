#include<bits/stdc++.h>
using namespace std;

const int MAX = 300001;
bool overcome[MAX];
int food[MAX];
vector<vector<int>> ingredient(MAX);

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i=0;i<m;i++) {
        cin >> food[i];
        for(int j=0;j<food[i];j++) {
            int A; cin >> A;
            ingredient[A].push_back(i);
        }
    }

    int cnt=0;
    while(n--) {
        int B; cin >> B;
        if(!overcome[B]) {
            overcome[B]=true;
    
            for(int e:ingredient[B]) {
                if(--food[e]==0) cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
