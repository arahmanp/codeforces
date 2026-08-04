#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);

        int t;
        cin >> t;

        while(t--) {
                int tokens[3];
                for(int i = 0; i < 3; i++) cin >> tokens[i];

                sort(tokens, tokens+3);

                int ans = min(tokens[2] - tokens[1], tokens[1] - tokens[0]);

                cout << ans << '\n';
        }

        return 0;
}