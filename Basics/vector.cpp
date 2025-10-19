// Vectors
#include<bits/stdc++.h>
using namespace std;

void explainVectors() {
    // Creation
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    v1.push_back(2);
    v1.push_back(3);

    vector<pair<int, int>> v_pair;
    v_pair.push_back({1, 3});
    v_pair.emplace_back(2, 4);
    
    // v2 -> {100, 100, 100, 100, 100}
    vector<int> v2(5,100);
    // v3 -> { _, _, _, _, _,}; length = 5;
    vector<int> v3(5);
    // copying
    vector<int> v4(v1);
    // accessing
    cout << v1[0] << " " << v1.at(0);
    cout << v1.back() << " ";
}

void explainIterators() {

    //iterator: stores the memory address rather than the data it. can access the data using *
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << "\n";
    it = it + 2;
    cout << *(it) << " ";
    // important functions
    vector<int>::iterator it2 = v1.end();
    // vector<int>::iterator it2 = v1.rend();
    // vector<int>::iterator it3 = v1.rbegin();

    //Printing
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << endl;
    }
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout<<*(it) << endl;
    }
    for(auto it: v1) {
        cout << it <<" ";
    }

    //deletion
    v1.erase(v1.begin() + 1);
    v1.erase(v1.begin() + 2, v1.begin() + 4);

    //Insertion
    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50, 300, 10 ,10 ,100}

    // {10,20}
    cout << v.size() << endl;
    v.pop_back(); // {10}
    v1.swap(v);
    v1.clear();
    cout << v1.empty();
}
int main() {
    explainVectors();
    explainIterators();
    return 0;
}