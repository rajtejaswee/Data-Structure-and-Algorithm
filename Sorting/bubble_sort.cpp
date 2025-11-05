#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Array after sorting"<<"\n";
    for (int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Recursion
void bubble_sort(int arr[], int n) {
    // Base Case: range == 1.
    if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
}
