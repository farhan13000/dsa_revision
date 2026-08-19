// Set = Underorder collection of unique item.

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int _t = 1;
    // cin >> _t;
    while (_t--) {
        set<int> st = {1, 2, 3};
        st.insert(4);

        if (st.find(10) != st.end()) {
            st.erase(10);
        }

        int sz = st.size();
        cout << "Set size = " << sz << "\n";
        // Iterate in set
        for (auto it : st) {
            cout << it << '\n';
        }
    }
}