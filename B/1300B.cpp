#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    int n , c;
    
    for(int i = 0; i < t; i++) {
        cin >> n;
        vector<int> vec(2*n);

        for(int j = 0; j < 2*n; j++) {
            cin >> vec[j];
        }

        sort(vec.begin(), vec.end());

        int ans = 0;
        ans = vec[n] - vec[n-1];
        cout << ans << '\n';
    }   

    return 0;
}