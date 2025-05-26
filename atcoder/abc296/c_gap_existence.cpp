#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: C
Score: 300
Link: https://atcoder.jp/contests/abc296/tasks/abc296_c
Contest: abc296
Status: Solved
*/

int main() {
    int n, x;
    cin >> n >> x;
     
    int temp;
    map<int, int> m;
    map<int, int>::iterator itr;
     
    for(int i=0; i<n; i++) {
        cin >> temp;
        m[temp] = i;
    }
     
    for(auto e:m) {
        itr = m.find(x + e.first);
        if(itr != m.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
     
    cout << "No" << endl;
}