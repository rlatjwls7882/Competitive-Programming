#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    char ab, ac, bc; cin >> ab >> ac >> bc;
    if(ab=='>' && ac=='>') {
        if(bc=='>') cout << "B";
        else cout << "C";
    } else if(ab=='<' && bc=='>') {
        if(ac=='>') cout << "A";
        else cout << "C";
    } else {
        if(ab=='>') cout << "A";
        else cout << "B";
    }
}