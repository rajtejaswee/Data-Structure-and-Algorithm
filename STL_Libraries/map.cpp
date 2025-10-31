#include<bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp1;
    map < pair<int, int>, int> mpp2;

    mpp1[1] = 2;
    mpp1.insert({2, 3});

    mpp2[{2, 3}] = 10;

    for(auto it: mpp1) {
        cout << it.first << " " << it.second << endl;
    }

    // printing the value
    cout << mpp1[1];
    cout << mpp1[2];

    auto it = mpp1.find(3);
    // cout << *(it).second;
    mpp1.find(5); // if the value is not there it points to mpp.end()
}

void explainMultimap() {
    //everything same as map, only it can store multiple keys
}