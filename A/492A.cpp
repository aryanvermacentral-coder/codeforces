#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin >> n;
    int h = 0, total = 0;

    for(int i = 1; i <= n; i++) {
        total += i*(i+1)/2;
        if(total <= n) {
            h++;
        } else {
            break;
        }
    }

    cout << h;
    return 0;
    
}