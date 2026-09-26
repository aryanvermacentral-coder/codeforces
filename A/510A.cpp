#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for(int r = 1; r <= n; r++){
        if(r % 2 == 1){
            for(int i = 1; i <= m; i++){
                cout << '#';
            }
            cout << '\n';
        } else {
            if((r / 2) % 2 == 1) {
                for(int i = 1; i <= m-1; i++) {
                    cout << ".";
                }
                cout << "#";
                cout << '\n';
            } else {
                cout << "#";
                for(int i = 1; i <= m-1; i++) {
                    cout << ".";
                }
                cout << '\n';
            }
        }
    }
    return 0;
}