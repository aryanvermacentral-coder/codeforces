#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str; cin >> str;
    string ans = "";

    for(char c : str) {
        c = tolower(c);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            ans = ans +  "." + c;
        }
    }
    
    cout << ans;

    return 0;
}