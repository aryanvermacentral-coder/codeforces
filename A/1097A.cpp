#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    string cards;
    bool valid = false;

    for(int i = 1; i <= 5; i++) {
        cin >> cards;

        if(cards[0] == str[0] || cards[1] == str[1]) {
            valid = true;
        }
    }

    if(valid == true) cout << "yes";
    else cout << "no";

    return 0;
}