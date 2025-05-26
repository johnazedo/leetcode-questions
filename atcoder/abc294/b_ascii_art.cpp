#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Difficult: B
Score: 200
Link: https://atcoder.jp/contests/abc294/tasks/abc294_b
Contest: abc294
Status: Solved
*/

int main() {
    int rows, cols, temp;
    cin >> rows >> cols;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> temp;
            if(temp == 0) {
                cout << ".";
            } else {
                cout << char(temp+64);
            }
        }
        cout << endl;
    }
}