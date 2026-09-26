#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string t; cin >> t;
    string str = "";
    
    int i = 0;
    int step = 1;

    while(i < n) {
        str += t[i];
        i += step;
        step++;
    }

    cout << str;

    return 0;
}