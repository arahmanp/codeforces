/**
 * Problem : 2260A - Monocarp's Contest
 * Contest : Educational Codeforces Round 194 (Rated for Div. 2)
 * URL     : https://codeforces.com/problemset/problem/2260/A
 * Tags    : implementation
 * Rating  : 800
 */

#include <ios>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int n_easy = 0, n_hard = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        (a[i] == 0) ? n_easy++ : n_hard++;
    }

    if(n_easy < 2) {
        cout << -1 << '\n';
        return;
    }

    if(a[0] == 0 && a[n - 1] == 0) cout << 0 << '\n';
    else if((a[0] == 1 && a[n - 1] == 0) || (a[0] == 0 && a[n - 1] == 1)) cout << 1 << '\n';
    else cout << 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}