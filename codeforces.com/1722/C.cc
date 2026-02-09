#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        set<string> A;
        for(int i=0;i<n;i++) {
            string s; cin >> s;
            A.insert(s);
        }
        set<string> B;
        for(int i=0;i<n;i++) {
            string s; cin >> s;
            B.insert(s);
        }
        set<string> C;
        for(int i=0;i<n;i++) {
            string s; cin >> s;
            C.insert(s);
        }

        int score1=0, score2=0, score3=0;
        for(set<string>::iterator iter=A.begin();iter!=A.end();iter++) {
            if(B.find(*iter)==B.end() && C.find(*iter)==C.end()) {
                score1+=3;
            } else if(!(B.find(*iter)!=B.end() && C.find(*iter)!=C.end())) {
                score1+=1;
            }
        }
        for(set<string>::iterator iter=B.begin();iter!=B.end();iter++) {
            if(A.find(*iter)==A.end() && C.find(*iter)==C.end()) {
                score2+=3;
            } else if(!(A.find(*iter)!=A.end() && C.find(*iter)!=C.end())) {
                score2+=1;
            }
        }
        for(set<string>::iterator iter=C.begin();iter!=C.end();iter++) {
            if(A.find(*iter)==A.end() && B.find(*iter)==B.end()) {
                score3+=3;
            } else if(!(A.find(*iter)!=A.end() && B.find(*iter)!=B.end())) {
                score3+=1;
            }
        }
        cout << score1 << " " << score2 << " " << score3 << '\n';
    }
}