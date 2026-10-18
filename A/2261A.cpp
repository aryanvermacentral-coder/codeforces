#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int k = count(s.begin(), s.end(), '1');
        int first = s.find('1');
        int last = s.rfind('1');

        if (k >= 3) cout << last - first << "\n";
        else cout << k - 1 << "\n";
    }
    return 0;
}