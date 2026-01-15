#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    long max_value = arr[arr.size() - 1];
    long long min_value = arr[0];
    long long count_max = 0;
    long long count_min = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == max_value) {
            count_max++;
        }
        if(arr[i] == min_value) {
            count_min++;
        }
    }
    long long min_beauty = max_value - min_value;
    long long number_of_ways = 0;
    if(min_value == max_value) {
        number_of_ways = (arr.size() * (arr.size() - 1))/2;
    }
    else {
        number_of_ways = count_max * count_min;
    }
    cout<<min_beauty<< " " << number_of_ways;
    return 0;
}