#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        long long n;
        std::cin >> n;

        long long b = (n / 12) * 12;
        long long a = n - b;

        if(a == 10) {
            if(b >= 12) {
                a += 12;
                b -= 12;
            } else {
                std::cout << -1 << '\n';
                continue;
            }
        }

        std::cout << a << ' ' << b << '\n';
    }
}