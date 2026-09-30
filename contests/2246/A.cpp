/**
 * Problem : 2246A - farmpiggie and Subset Sum
 * Contest : Codeforces Round 1108 (Div. 2)
 * URL     : https://codeforces.com/contest/2246/problem/A
 * Tags    : constructive
 * Rating  : 800
 */

#include <ios>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i = 0; i < n; i++) p[i] = i + 1;

    for(int i = 0; i < n - 1; i++) swap(p[i], p[i + 1]);

    for(auto el : p) cout << el << ' ';

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