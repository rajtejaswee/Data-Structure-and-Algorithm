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
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            flag = true;
            break;
        }
        else {
            flag = false;
        }
    }
    if(flag){
        cout << target << " is present" << endl;
    }
    else {
        cout << target << " is not present" << endl;
    }
    return 0;
}