#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(); cin.tie(); cout.tie();
	int n; cin>>n;
	vector<pair<int, int>> team;
	for(int i=0;i<n;i++) {
		int h, a; cin>>h>>a;
		team.push_back(make_pair(h, a));
	}

	int cnt=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(i!=j && team[i].first==team[j].second) {
				cnt++;
			}
		}
	}
	cout<<cnt;
}