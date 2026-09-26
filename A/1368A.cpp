#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for(int i = 0; i < t; i++) {
        long long a, b, n;  
        cin >> a >> b >> n;
        int ops = 0;

        while(a <= n && b <= n) {   
            if(a <= b) a += b;      
            else       b += a;     
            ops++;
        }

        cout << ops << "\n";
    }

    return 0;
}