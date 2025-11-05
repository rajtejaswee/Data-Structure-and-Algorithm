#include<bits/stdc++.h>
using namespace std;

int partition_Index(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1){
            j--;
        }
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(low<high){
        int pIndex = partition_Index(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {
    vector<int> arr={45,89,56,23,12,9};
    quickSort(arr, 0, arr.size() - 1);
    for(int num:arr){
        cout << num << " ";
    }
    cout << "\n";
}