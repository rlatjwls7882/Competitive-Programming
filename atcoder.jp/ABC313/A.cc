#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(); cin.tie(); cout.tie();
	int N; cin>>N;
	int P0; cin>>P0;

	int maxVal=0;
	for(int i=1;i<N;i++) {
		int tmp; cin>>tmp;
		maxVal = max(maxVal, tmp);
	}

	cout<<max(0, maxVal-P0+1);
}