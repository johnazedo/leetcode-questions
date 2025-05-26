#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: A
Score: 100
Link: https://atcoder.jp/contests/abc294/tasks/abc294_a
Contest: abc294
Status: Solved
*/

int main() {
    // Time: O(N)
    // Space: O(1)
    
    int n, temp;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> temp;
        if(temp%2==0) {
            cout << temp << endl;
        }
    }
}