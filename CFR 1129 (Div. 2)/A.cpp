#include<iostream>
#include<vector>

using namespace std;

int main (){ 
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        
        for(int i = 0 ;i < n ; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int ans = 0;
        int remaining = 0;

        for (int i = 0; i <= n; i++) {
            remaining += freq[i];
            if (remaining < k) {
                break;
            }
            ans++;
            remaining -= k;
        }
        cout << ans << '\n';

    }

    return 0;
}