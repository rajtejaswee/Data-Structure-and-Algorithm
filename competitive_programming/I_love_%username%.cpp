#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int more = arr[0];
    int less = arr[0];
    int amazing = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>more) {
            more = arr[i];
            amazing++;
        }
        if(arr[i]<less) {
            less = arr[i];
            amazing++;
        }
    }
    cout << amazing << endl;
}