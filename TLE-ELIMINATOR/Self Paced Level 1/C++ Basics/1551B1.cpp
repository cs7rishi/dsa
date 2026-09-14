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
    // Write your solution here
    string str;
    cin>>str;
    set<char> st;
    for(auto it:str){
        st.insert(it);
    }
    cout << st.size() << "\n";
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
    cin >> t; // Comment out if the problem has only 1 test case
    while (t--) {
        solve();
    }

    return 0;
}