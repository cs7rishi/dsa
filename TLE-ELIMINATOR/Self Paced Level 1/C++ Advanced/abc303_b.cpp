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
    int n , m;
    cin>>n>>m;
    int photo[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>photo[i][j];
        }
    }

    int friendMap[n][n];
    memset(friendMap, 0 , sizeof(friendMap));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m-1; j++){
            int x = photo[i][j];
            int y = photo[i][j+1];

            friendMap[x][y] = 1;
        }
    }

    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j) continue;
            if(friendMap[i][j] <= 0) count++;
        }
    }

    cout<<count/2<<endl;



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