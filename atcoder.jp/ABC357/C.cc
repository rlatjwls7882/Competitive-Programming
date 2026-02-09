#include<bits/stdc++.h>
using namespace std;

char m[729][729];

void make(int _size, int x, int y) {
    for(int i=x+_size;i<x+2*_size;i++) {
        for(int j=y+_size;j<y+2*_size;j++) {
            m[i][j]='.';
        }
    }
    if(_size==0) return;

    make(_size/3, x, y);
    make(_size/3, x, y+_size);
    make(_size/3, x, y+2*_size);
    make(_size/3, x+_size, y);
    make(_size/3, x+_size, y+2*_size);
    make(_size/3, x+2*_size, y);
    make(_size/3, x+2*_size, y+_size);
    make(_size/3, x+2*_size, y+2*_size);
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N; cin >> N;
    for(int i=0;i<pow(3, N);i++) {
        for(int j=0;j<pow(3, N);j++) {
            m[i][j]='#';
        }
    }

    make(pow(3, N-1), 0, 0);

    for(int i=0;i<pow(3, N);i++) {
        for(int j=0;j<pow(3, N);j++) {
            cout << m[i][j];
        }
        cout << '\n';
    }
}