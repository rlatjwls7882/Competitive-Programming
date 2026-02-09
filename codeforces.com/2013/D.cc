#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];

        vector<long long> vals1, vals2, sums, cnts;
        long long sum=a[n-1], cnt=1;
        for(int i=n-2;i>=0;i--) {
            if(a[i]>=a[i+1]) {
                cnt++;
                sum += a[i];
            } else {
                while(!vals2.empty() && sum/cnt>=vals2.back()) {
                    sum += sums.back();
                    cnt += cnts.back();
                    vals1.pop_back();
                    vals2.pop_back();
                    sums.pop_back();
                    cnts.pop_back();
                }
                vals1.push_back(sum/cnt);
                vals2.push_back((sum+cnt-1)/cnt);
                cnts.push_back(cnt);
                sums.push_back(sum);
                sum=a[i];
                cnt=1;
            }
        }
        while(!vals2.empty() && sum/cnt>=vals2.back()) {
            sum += sums.back();
            cnt += cnts.back();
            vals1.pop_back();
            vals2.pop_back();
            sums.pop_back();
            cnts.pop_back();
        }
        vals1.push_back(sum/cnt);
        vals2.push_back((sum+cnt-1)/cnt);
        sort(vals1.begin(), vals1.end());
        sort(vals2.begin(), vals2.end());

        cout << vals2.back() - vals1[0] << '\n';
    }
}