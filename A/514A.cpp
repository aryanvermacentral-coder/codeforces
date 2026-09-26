#include<bits/stdc++.h> 
using namespace std;
int main () {
    string x; cin >> x;
    int digit;

    for(int i=0; i<x.length(); i++) {

        digit = x[i] - '0';
        if(i == 0 && digit == 9) {
            continue;
        }
        if(digit > 4) {
            digit = 9 - digit;
            x[i] = digit + '0';
        }
    }

    cout << x;
    return 0;
}