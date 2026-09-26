#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a, b;
    int count = 0;
    int min = 0;

    for(int i = 1; i <= n; i++) {
        cin >> a;
        count = count - a;
        cin >> b;
        count = count + b;
        min = max(min, count);
    }

    cout << min;

    return 0;
}