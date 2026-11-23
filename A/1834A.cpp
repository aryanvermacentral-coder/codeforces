
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int count1 = 0;
        int count11 = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            if(a[i] == 1) count1++;
            else count11++;
        }

        int op = 0;

        while(count1 < count11) {
            count1++;
            count11--;
            op++;
        }

        if(count11 % 2 != 0) {
            op++;
        }

        cout << op << '\n';
    }

    return 0;
}
