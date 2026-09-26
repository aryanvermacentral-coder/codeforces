#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int sz = n;
    vector<int> v;
    int h;
    while(n != 0) {
        cin >> h;
        v.push_back(h);
        n--;
    }

    int max_val = *max_element(v.begin(), v.end());
    int min_val = *min_element(v.begin(), v.end());

    // leftmost max (cheapest to bring to front)
    int max_idx = 0;
    for(int i = 0; i < sz; i++)
        if(v[i] == max_val){ max_idx = i; break; }

    // rightmost min (cheapest to bring to end)
    int min_idx = 0;
    for(int i = sz-1; i >= 0; i--)
        if(v[i] == min_val){ min_idx = i; break; }

    int ans = max_idx + (sz-1-min_idx);
    if(min_idx < max_idx) ans--;

    cout << ans;
    return 0;
}