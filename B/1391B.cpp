#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;         
    while(t--) {      
        int n, m;
        cin >> n >> m;
    
        vector<string> g(n);
        for(int i = 0; i < n; i++) {
            cin >> g[i];
        }

        int changes = 0;

        for(int j = 0; j < m-1; j++) {
            if(g[n-1][j] != 'R') {
                changes++;
            }
        }

        for(int i = 0; i < n-1; i++) {
            if(g[i][m-1] != 'D') {
                changes++;
            }
        }

        cout << changes << "\n";
    }
        
    return 0;
}