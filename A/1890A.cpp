#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        map<int, int> map;

        for(int i = 0 ; i < n; i++) {
            cin >> a[i];
            map[a[i]]++;
        }

        if(map.size() >= 3) {
            cout << "no\n";
        } else {
            int freq1 = map.begin()->second;
            int freq2 = map.rbegin()->second;

            if(freq1 == freq2) {
                cout << "yes\n";
            } else if(n % 2 == 1 && abs(freq1 - freq2) == 1) {
                cout << "yes\n";
            } else {
                cout << "no\n";
            }
        }
    }

    return 0;
}