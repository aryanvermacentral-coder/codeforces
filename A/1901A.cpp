#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;

        ans = max(ans, a[0]);

        for(int i = 1; i < n; i++) {
            int gap = a[i] - a[i-1];
            ans = max(ans, gap);
        }

        ans = max(ans, 2*(x-a[n-1]));

        cout << ans << '\n' ;
    }

    return 0;
}