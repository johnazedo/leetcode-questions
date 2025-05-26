#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: A
Score: 100
Link: https://atcoder.jp/contests/abc293/tasks/abc293_a
Contest: abc293
Status: Solved
*/

int main() {
    // Time: O(N)
    // Space: O(N)

    string input, output;
    char save;
    cin >> input;

    for(int i=0; i<int(input.length()); i++) {
        if((i+1)%2!=0) {
            save = input[i];
        } else {
            output += input[i];
            output += save;
        }
    }

    cout << output << endl;
}