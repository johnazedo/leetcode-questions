#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Score: 150
Link: https://atcoder.jp/contests/abc408/tasks/abc408_b
Status: Solved
*/

int main() {
    int n;
    cin >> n;  

    // This datastructure already sorts the elements in ascending order.
    set<int> s;

    int temp;
    for(int i = 0; i<n; i++) {
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size() << endl;
    for(int elem : s) {
        cout << elem << " ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}