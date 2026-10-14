#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    bool sort = true;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(a[0] == 1) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }

    }

    return 0;
}