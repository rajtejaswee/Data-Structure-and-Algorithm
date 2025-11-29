#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    int min = INT_MAX;
    int index1 = 0, index2 = 0;
    for (int i = 1; i < n; i++)
    {
        if(abs(arr[i-1] - arr[i]) < min) {
            min = abs(arr[i-1] - arr[i]);
            index1 = i - 1;
            index2 = i;
        }
    }
    if(abs(arr[n-1] - arr[0]) < min){
        index1 = 0;
        index2 = n - 1;
        cout << index2+1 << " " << index1+1 << endl;
    }
    else {
        cout << index1+1 << " " << index2+1 << endl;
    }
    return 0;
}