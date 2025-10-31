#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int lastdigit = temp % 10;
        sum += pow(lastdigit,3);
        temp = temp / 10;
    }
    if(sum == n) {
        cout << "Is an Armstrong Number" << endl;
    }
    else {
        cout << "Is not an Armstrong Number" << endl;
    }
}