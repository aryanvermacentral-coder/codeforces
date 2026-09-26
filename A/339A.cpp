#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    int n = str.length();
    vector<int> arr;

    for(int i = 0; i < n; i += 2) {
        arr.push_back(str[i] - '0');  
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i != arr.size() - 1) cout << "+";
    }
}
 