#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Score: 150
Link: https://atcoder.jp/contests/abc408/tasks/abc408_b
Status: TLE
*/

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n, 0);

    int l,r;
    for(int i = 0; i<m; i++) {
        cin >> l >> r;
        
        for(int j = (l-1); j<r; j++) {
            v[j] += 1;
        }
    }

    int menor = 100000000;
    for(int i = 0; i<n; i++){
        if(v[i]<menor) {
            menor = v[i];
        }
    }

    cout << menor << endl;
    return EXIT_SUCCESS;
}