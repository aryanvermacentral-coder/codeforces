#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string s;
    int first = 0, last = 0;

    for(int i = 0; i < t; i++) {
        cin >> s;
        int ones = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') ones++;
        }

        if(ones == 0) {
            cout << 0 << "\n";
            continue;
        }

        int count = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '1') {
                first  = i;
                break;
            }
        }

        for(int i = s.length()-1; i >= 0 ; i--) {
            if(s[i] == '1') {
                last = i;
                break;
            }
        }

        for(int i = first; i <= last; i++) {
            if(s[i] == '0') {
                count++;
            }
        }

        cout << count << "\n";
        count = 0;
    }

    return 0;
}