#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;
    
    for(int i=1;i<=N;i++) {
        cout << (i%3==0?"x":"o");
    }
}