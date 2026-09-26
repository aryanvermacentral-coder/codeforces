#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string n;
    int ans;
    
    for(int i = 0; i < t; i++) {
        cin >> n;
        int digit; int l;
        digit = n[0] - '0';
        l = n.length();
        ans = (digit - 1)*10 + l*(l+1)/2;
        cout << ans << "\n";
    }


    return 0;
}