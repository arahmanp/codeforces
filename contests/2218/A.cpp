#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while(t--) {
        int x;

        std::cin >> x;

        std::cout << x << '\n';
    }

    return 0;
}