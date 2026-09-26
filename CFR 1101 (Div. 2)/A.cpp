#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int ans = n;

        for (int i = 0; i < n; i++) {

            int left = 0;
            int right = 0;

            for (int j = 0; j < n; j++) {

                if (vec[j] < vec[i])
                    left++;

                else if (vec[j] > vec[i])
                    right++;
            }

            ans = min(ans, max(left, right));
        }

        cout << ans << '\n';
    }

    return 0;
}