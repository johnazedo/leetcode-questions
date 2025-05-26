#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: A
Score: 100
Link: https://atcoder.jp/contests/abc296/tasks/abc296_a
Contest: abc296
Status: Solved
*/

int main() {
    int n;
    cin >> n;

    string temp;
    cin >> temp;

    char past, actual;

    for(int i=0; i<n; i++) {
        if(i==0) {
            past = temp[i];
        } else {
            actual = temp[i];
            if(past == actual) {
                cout << "No" << endl;
                return 0;
            }
            past = actual;
        }
    }
    cout << "Yes" << endl;
}