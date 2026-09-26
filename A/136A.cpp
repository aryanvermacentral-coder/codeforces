//MY SOLUTION (higher TC : O(nlogn)  & complicated)

#include<bits/stdc++.h> 
using namespace std;

int main() {
    vector<pair<int, int>> vec;
    int n; cin >> n; int idx; int arr[n];
    for(int idx = 1; idx <= n; idx++) {
        cin >> arr[idx];
        vec.push_back({arr[idx], idx});
    }

    sort(vec.begin(), vec.end());

    for(auto p: vec) {
        cout << p.second << " ";
    }

    return 0;
}

// BETTER SOLUTION ( TC : O(n) )

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p[n+1], ans[n+1];
    
    for(int i = 1; i <= n; i++) cin >> p[i];
    
    for(int i = 1; i <= n; i++)
        ans[p[i]] = i;  // i gave to p[i], so p[i] received from i
    
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
}
