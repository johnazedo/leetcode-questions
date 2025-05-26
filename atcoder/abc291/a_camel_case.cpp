#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: A
Score: 100
Link: https://atcoder.jp/contests/abc291/tasks/abc291_a?lang=en
Contest: abc291
Status: Solved
*/

int main() {
    // Time: O(N)
	// Space: O(1)

    string text;
    cin >> text;
    int size = int(text.length());

    for(int i=0; i<size; i++) {
        if(int(text[i]) < 97) {
             cout << i+1 << endl;
             break;
        }
    }
}