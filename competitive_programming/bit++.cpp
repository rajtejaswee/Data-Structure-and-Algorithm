#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == "++X") {
            ++x;
        }
        if(arr[i] == "X++") {
            x++;
        }
        if(arr[i] == "--X") {
            --x;
        }
        if(arr[i] == "X--") {
            x--;
        }
    }
    cout << x << endl;
}