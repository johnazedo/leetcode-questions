#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

/*
Score: 400
Link: https://atcoder.jp/contests/abc408/tasks/abc408_d
Status: Unsolved
*/

int main() {
    int t;
    cin >> t;

    int n;
    string s;
    for(int i = 0; i<t; i++){
        cin >> n;
        cin >> s;
        
        vector<int> v_0;
        vector<int> v_1;
        int res = 0;
        int left = 0, right = 0;

        for(;;) {
            if(right < n) {
                if(s[right] == s[left]) {
                    right++;
                    continue;
                }
            }

            if(s[left] == '0') {
                v_0.push_back(right-left);
            } else {
                v_1.push_back(right-left);
            }

            left=right;

            if(right>=n){
                break;
            }
        }

        sort(v_0.begin(), v_0.end(), std::greater<>());
        sort(v_1.begin(), v_1.end(), std::greater<>());

        for(;;) {
            if((v_0.size() + v_1.size()) > 2) {
                int i_0 = v_0.back();
                int i_1 = v_1.back();
                
                if(i_0 <= i_1) {
                    res+=i_0;
                } else {
                    res+=i_1;
                }

                v_0.pop_back();
                v_1.pop_back();
            } else {
                v_1.clear();
                v_0.clear();
                break;
            }
        }

        cout << res << endl;
    }
}