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
        std::vector<int> a(7);
        for(int i = 0; i < 7; i++) std::cin >> a[i];

        int ans = 0;
        std::sort(a.begin(), a.end());

        for(int i = 0; i < 6; i++) ans += (-1 * a[i]);
        ans += a.back();

        std::cout << ans << '\n';
    }
}