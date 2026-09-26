#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int open = count(s.begin(), s.end(), '(');
        int close = count(s.begin(), s.end(), ')');
        if(open == close) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}       