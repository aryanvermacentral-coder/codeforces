#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int count = 0;
        int n; cin >> n;
        string str; cin >> str;

        for(int i = 0; i < n; i++) {
            if(str[i] == '.') {
               count++;
            }
        }

        if(str.find("...") != string::npos) {
                cout << 2 << endl;
        } else {
            cout << count << endl;
        }
    }

    return 0;
}