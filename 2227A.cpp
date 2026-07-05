#include <ios>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;

    std::cin >> t;

    while(t--) {
        int x, y;

        std::cin >> x >> y;

        if(x % 2 != 0 && y % 2 != 0) std::cout <<  "no\n";
        else std::cout << "yes\n";
    }

    return 0;
}