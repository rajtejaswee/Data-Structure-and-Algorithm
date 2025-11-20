#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++) {
        if(arr[i] == target){
            cout << target << "is present at index" << endl;
            break;
        }
        else {
            cout << target << "is not present" << endl;
        }
    }
    return 0;
}