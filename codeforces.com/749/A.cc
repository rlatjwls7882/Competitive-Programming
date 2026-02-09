#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(); cin.tie(); cout.tie();
	int n; cin>>n;

	cout << n/2 << endl;
	int cnt = n%2==0 ? n/2 : n/2-1;
	for(int i=0;i<cnt;i++) {
		cout << "2 ";
	}

	if(n%2==1) {
		cout << "3";
	}
}