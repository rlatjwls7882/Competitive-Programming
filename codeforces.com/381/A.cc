#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    deque<int> deq;
    for(int i=0;i<N;i++) {
        int tmp; cin >> tmp;
        deq.push_back(tmp);
    }

    int pointS=0, pointD=0;
    for(int i=0;i<N;i++) {
        if(i%2==0) {
            if(deq.front()>deq.back()) {
                pointS += deq.front();
                deq.pop_front();
            } else {
                pointS += deq.back();
                deq.pop_back();
            }
        } else {
            if(deq.front()>deq.back()) {
                pointD += deq.front();
                deq.pop_front();
            } else {
                pointD += deq.back();
                deq.pop_back();
            }
        }
    }
    cout << pointS << " " << pointD;
}