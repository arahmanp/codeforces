/**
 * Problem : 2231A - Construct an Array
 * Contest : Codeforces Round 1099 (Div. 2)
 * URL     : https://codeforces.com/contest/2231/problem/A
 * Tags    : constructive
 * Rating  : 800
 */

#include <ios>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> res(n);
    for(int i = 0; i < n; i++) res[i] = n + i;

    for(auto el : res) cout << el << ' ';

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}