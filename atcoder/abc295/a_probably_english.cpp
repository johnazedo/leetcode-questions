#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: A
Score: 100
Link: https://atcoder.jp/contests/abc295/tasks/abc295_a
Contest: abc295
Status: Solved
*/

int main() {
    // Time: O(N)
    // Space: O(N)

    int n;
    cin >> n;

    string temp;
    set<string> input;
    set<string> english = { "and", "not", "that", "the", "you" };
    set<string>::iterator itr;

    for(int i=0; i<n; i++) {
        cin >> temp;
        input.insert(temp);
    }

    for(auto itr = english.begin(); itr != english.end(); itr++) {
        if(input.find(*itr) != input.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}