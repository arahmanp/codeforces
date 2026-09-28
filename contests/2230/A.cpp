#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while(t--) {
        int n, a, b;

        long long ans = 0;

        std::cin >> n >> a >> b;

        int r = n % 3;
        int m = n - r;

        if(3 * a <= b) ans += (long long)a * m;
        else ans += (long long)b * (m / 3);

        if(a * r <= b) ans += (long long)a * r;
        else ans += (long long)b;

        std::cout << ans << '\n';
    }
}