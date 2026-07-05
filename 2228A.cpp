#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while(t--) {
        int n;

        std::cin >> n;

        std::vector<int> w(n);

        for(int i = 0; i < n; i++) std::cin >> w[i];

        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for(auto el : w) {
            if(el == 0) count_0++;
            else if(el == 1) count_1++;
            else if(el == 2) count_2++;
        }

        int ans = count_0 + std::min(count_1, count_2);

        std::cout << ans << '\n';
    }
}