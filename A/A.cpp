#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int oddCount = (x % 2) + (y % 2);
        if (oddCount <= 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        if (t) cout << "\n";
    }
    return 0;
}
