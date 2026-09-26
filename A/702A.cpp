#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLen = 1, cur = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            cur++;
            maxLen = max(maxLen, cur);
        }else {
            cur = 1;
        }
    }

    cout << maxLen;

    return 0;
}