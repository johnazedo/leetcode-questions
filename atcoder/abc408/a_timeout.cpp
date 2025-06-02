#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Score: 150
Link: https://atcoder.jp/contests/abc408/tasks/abc408_a
Status: Solved
*/

#define TIME 5

int main() {
    int n, s;
    cin >> n >> s;

    int interval = (s*10) + TIME;
    int previous = 0;
    bool flag = true;

    int temp = 0;
    for(int i = 0; i<n; i++) {
        cin >> temp;
        temp = temp*10;
        if((temp - previous) > interval) {
            flag = false;
        }
        previous = temp;
    }
    
    if(flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return EXIT_SUCCESS;
}