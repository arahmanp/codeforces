#include <ios>
#include <iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::cin >> n;

        for(int i = 1, j = 3*n; i <= n && j >= n + 1; i++, j -= 2) {
            std::cout << i << ' ' << j - 1 << ' ' << j << ' ';
        }

        std::cout << '\n';
    }
}