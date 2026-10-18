#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        int odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 != 0) {
                odd++;
            }
        }

        odd % 2 == 0 ? cout << "Yes\n" : cout << "No\n";
    }
}