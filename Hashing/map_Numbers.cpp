#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    //unordered map:
    // unordered_map<int, int>
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // how to iterate
    for(auto it: mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin>>number;
        cout << mpp[number] << endl;
    }
}