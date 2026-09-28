#include <ios>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int i = 0; i < n; i++) std::cin >> a[i];

        int res = std::gcd(a[0], a[n - 1]);

        std::cout << res << '\n';
    }

    return 0;
}