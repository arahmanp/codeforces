#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {
                int n;
                string s;
                cin >> n >> s;

                vii ranges, all_ranges;

                int l = 0;
                for(int r = 0; r < n - 1; r++) {
                        if(s[r] != s[r + 1]) {
                                if(r - l != 0) ranges.push_back({l, r});
                                all_ranges.push_back({l, r});
                                l = r + 1;
                        } 
                }

                if(n - 1 - l != 0) ranges.push_back({l, n - 1});
                all_ranges.push_back({l, n - 1});

                int n_ranges = ranges.size();
                int best = 1e9;
                for(int i = 0; i < n_ranges - 1; i++) {
                        auto [a1, b1] = ranges[i];
                        auto [a2, b2] = ranges[i + 1];

                        int n_merged = b1 - a1 + b2 - a2 + 2;
                        int ans = all_ranges.size();
                }
        }

        return 0;
}