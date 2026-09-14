#include <bits/stdc++.h>
using namespace std;

// Short hands for data types and vectors
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Common macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
    int n; cin>>n;
    ll fib1 = 0;
    ll fib2 = 1;

    if(n == 1) {
        cout << 0 <<endl;
        return;
    }
    if(n == 2) {
        cout << 1 <<endl;
        return;
    }

    ll temp = 0;
    for(int i = 3 ; i <=n ; i++){
        temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
    }
    cout << temp <<endl;
}

int main() {
    // Optimize C++ standard stream I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Redirect input from file locally
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); // Uncomment if you want file output locally
#endif

    int t = 1;
    // cin >> t; // Comment out if the problem has only 1 test case
    while (t--) {
        solve();
    }

    return 0;
}