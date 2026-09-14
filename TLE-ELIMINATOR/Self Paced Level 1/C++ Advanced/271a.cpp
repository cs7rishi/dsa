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

bool isDistinct(int year){
    set<int> digits;
    while(year > 0){
        digits.insert(year%10);
        year/=10;

    }

    return digits.size() == 4;
}
void solve() {
    int year;
    cin>>year;
    year++;
    while(!isDistinct(year)){
        year++;
    }

    cout<<year<<endl;
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