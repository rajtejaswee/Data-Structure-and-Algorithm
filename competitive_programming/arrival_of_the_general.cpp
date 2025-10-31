#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lst[n];
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    int maxIndex = 0, minIndex = 0;
    int maxValue = lst[0], minValue = lst[0];

    for (int i = 1; i < n; i++)
    {
        if(lst[i] > maxValue) {
            maxValue = lst[i];
            maxIndex = i;
        }
        if(lst[i] <= minValue) {
            minValue = lst[i];
            minIndex = i;
        }
    }

    int swaps;
    if(maxIndex > minIndex) {
        swaps = maxIndex + (n - 1 - minIndex) - 1;
    }
    else {
        swaps = maxIndex + (n - 1 - minIndex);
    }
    cout << swaps << endl;
}