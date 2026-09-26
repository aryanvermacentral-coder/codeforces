#include<bits/stdc++.h>
using namespace std;

int main() {
    int  n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml = abs(k*l);
    int toast1 = abs(ml/nl);
    int toast2 = abs(c*d);
    int toast3 = abs(p/np);

    int minVal = min({toast1, toast2, toast3});
    int toast = abs(minVal/n);
    cout << toast;
    return 0;
}



