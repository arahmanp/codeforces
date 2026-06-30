#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w;

    cin >> w;

    if(w % 2 == 0 && w > 2) cout << "YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t; // uncomment kalau ada multi-testcase
    while (t--) {
        solve();
    }
    
    return 0;
}
