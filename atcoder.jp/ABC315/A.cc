#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(); cin.tie(); cout.tie();
	string s; cin>>s;
	for(int i=0;i<s.length();i++) {
		if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') {
			cout<<s[i];
		}
	}
}