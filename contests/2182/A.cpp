#include <ios>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while(t--) {
        int n;
        std::string s;
        std::cin >> n >> s;

        if((s.find("2026") != std::string::npos) || (s.find("2025") == std::string::npos)) std::cout << 0 << '\n';
        else std::cout << 1 << '\n';
    }
}