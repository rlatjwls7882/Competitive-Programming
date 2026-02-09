#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int arr[N+1];
    for(int i=1;i<=N;i++) {
        cin >> arr[i];
    }

    vector<pair<int, int>> v;
    for(int rep=0;rep<100;rep++) {
        for(int i=1;i<=N;i++) {
            if(i!=arr[i]) {
                v.push_back(make_pair(min(i, arr[i]), max(i, arr[i])));
                int tmp = arr[arr[i]];
                arr[arr[i]]=arr[i];
                arr[i]=tmp;
            }
        }
    }

    cout << v.size();
    for(int i=0;i<v.size();i++) {
        cout << endl << v[i].first << " " << v[i].second;
    }
}