#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int capacity = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int exit, enter;
        cin >> exit >> enter;
        capacity = (capacity - exit) + enter;
        maxi = max(maxi, capacity);
    }
    cout << maxi << endl;
}