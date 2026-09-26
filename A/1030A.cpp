#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            found = true;
            break;
        }
    }

    if(found == true) cout << "HARD";
    if(found == false) cout << "EASY";
}