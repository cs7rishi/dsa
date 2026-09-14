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

void printSeq(int start, int limit, int step){
    // cout<<endl<<"start: " <<start<<" end: "<<limit<<" step: "<<step<<endl;
    for(int i = start ; i != limit ; i+= step){
        cout<<i<<" ";
    }
}
void solve() {
    int n; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        int x = arr[i];
        int y = arr[i+1];
        // cout<<endl<<x <<" " << y<<endl;
        cout<<x<<" ";
        if(x < y){
            printSeq(x+1, y, 1);
        }else if(x > y){
            printSeq(x-1, y, -1);
        }
    }

    cout<<arr[n-1]<<endl;
    
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