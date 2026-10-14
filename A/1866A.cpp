#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for(int i = 1 ; i < n; i++) {
        int currentAbs = abs(arr[i]);
        int smallestAbs = abs(smallest);

        if(currentAbs < smallestAbs) {
            smallest = arr[i];
        } else if(currentAbs == smallestAbs && arr[i] > smallest) {
            smallest = arr[i];
        }
    }

    cout << abs(smallest);

    return 0;
}