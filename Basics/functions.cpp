#include<bits/stdc++.h>
using namespace std;

void print() {
    cout << "Hello" << endl;
}
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    print();
    int s = sum(5, 10);
    cout << s;
    return 0;
}