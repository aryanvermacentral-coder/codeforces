#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int arr[3] = {x1, x2, x3};
    sort(arr, arr+3);
    int median = arr[1];

    int distance = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);
    cout << distance;

    return 0;
}