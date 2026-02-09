#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N; cin >> N;

    int sum=0;
    int X[N];
    for(int i=0;i<N;i++) {
        cin >> X[i];
        sum += X[i];
    }

    int case1 = sum/N, case2 = case1+1;
    int sum1=0, sum2=0;
    for(int i=0;i<N;i++) {
        sum1 += pow(X[i]-case1, 2);
        sum2 += pow(X[i]-case2, 2);
    }
    cout << min(sum1, sum2);
}