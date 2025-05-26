#include <iostream>
#include <set>
#include <bits/stdc++.h>
#define STRING_SIZE 8
using namespace std;

/*
Difficult: B
Score: 200
Link: https://atcoder.jp/contests/abc296/tasks/abc296_b
Contest: abc296
Status: Solved
*/

int main() {
    string temp;
    vector<char> summary = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    string number;
    char letter;

    for(int i = STRING_SIZE-1; i>= 0; i--) {
        cin >> temp;
        if (temp.find('*') != std::string::npos) {
            number = to_string(i+1);
            break;
        }
    }

    for(int i =0; i<STRING_SIZE; i++) {
        if(temp[i] == '*') {
            letter = summary[i];
        }
    }

    cout << char(letter) << number << endl;
}