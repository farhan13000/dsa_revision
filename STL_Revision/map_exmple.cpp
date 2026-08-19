#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _t = 1;
    // cin >> _t;

    while (_t--) {
        /*
            map = 
                {
                    1 : "Samay",
                    2 : "Raina",
                    3 : "Khushi"
                }
        */

        map<int, string> mp;
        mp[1] = "Samay";
        mp[2] = "Raina";
        mp[3] = "Khushi";

        for (auto it : mp) {
            cout << it.first << " : " << it.second << "\n";
        }


    }
}