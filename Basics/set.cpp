#include<bits/stdc++.h>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);

    // Functionality of insert in vector can be also used, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above.

    auto it = st.find(4);
    cout << *(it) << endl;

    st.erase(1);

    int cnt = st.count(1);
    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4); // [first, end)
    //lower_bound() and upper_bound() works same as that of vector.
}
void explainMultiset() {
    // can store the duplicates
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // deletes the first occurance of the 1.


    int cnt = ms.count(1);
    //only a single one erased.
    ms.erase(ms.find(2));

    // ms.erase(ms.find(1), ms.find(1)+2);
    //rest all of the fuction are same.
}

void explainUnorderedSet() {
    unordered_set<int> st;
}