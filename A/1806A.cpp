#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) {
            cout << -1 << '\n';
            continue;
        }

        int moves = d - b;
        a += moves;

        if (a < c) {
            cout << -1 << '\n';
            continue;
        }

        moves += (a - c);

        cout << moves << '\n';
    }

    return 0;
}