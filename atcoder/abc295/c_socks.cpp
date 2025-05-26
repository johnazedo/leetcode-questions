#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: C
Score: 300
Link: https://atcoder.jp/contests/abc295/tasks/abc295_c
Contest: abc295
Status: Solved
*/

int main() {
    int n, temp;
    cin >> n;

    set<int> s;
    set<int>::iterator itr;
    int count = 0;

    for(int i=0; i<n; i++) {
        cin >> temp;
        itr = s.find(temp);
        if(itr == s.end()) {
            s.insert(temp);
        } else {
            s.erase(itr);
            count++;
        }
    }

    cout << count << endl;
}