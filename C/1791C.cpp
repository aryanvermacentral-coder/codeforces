#include<iostream>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int left = 0;
        int right = n-1;
        int len = 0;

        while(left < right) {
            if( (s[left] == '1' && s[right] == '0') || (s[left] == '0' && s[right] == '1') ) {
                len++;
                left++;
                right--;
            } else {
                break;
            } 
        }

        cout << n-(2*len) << '\n';
    }

    return 0;
}