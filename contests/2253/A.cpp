#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;

    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false; 
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(is_prime(n + 1)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}