/*Jai Sree Krishna*/
/*Swagnik_Dhar */
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define ul unsigned long int
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define mxx 2e5
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define bck back
#define lb *lower_bound
#define mp make_pair
#define minele *min_element
#define maxele *max_element
#define ff first
#define ss second
#define endl '\n'
#define pi 3.1415926535897932384621000000000
#define mem(a,b) memset(a, b, sizeof(a) )
#define f(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define uniq(v)  (v).erase(unique(all(v)),(v).end())
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define rev(v)              reverse(v.begin(),v.end())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define debug(x) cout<< #x << "  " << x <<endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()
const ll inf = 1e18;
using namespace std;
void init_code() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("Codeoutput.txt", "w", stdout);
#endif
}
//-----------------------------------------------------------------------------//
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll num1, ll num2) {return (num1 / gcd(num1, num2)) * num2;}
ll maxx(ll a, ll b) { return (a > b) ? a : b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// unique(string.begin(),string.end())-> always returns an iterator .
// Convert Number(Num) direct to binary -> cout << bitset   <8>(num) << endl;
// cout << setprecision(10) << fixed;
// we use: __builtin_popcount(Given number); to count the number of set bits in it.
//-----------------------------------------------------------------------------//
using namespace std;
void solve() {
 // Taking the size and input from the original array
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
// Creating a prefix Sum Array
    vector<int>pref(n + 1);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pref[i] = arr[0];                // initialising the first element of the prefix sum array as same as the first element of the original array
        } else {
            pref[i] = arr[i] + pref[i - 1]; // initialising all the precomputation of sums in the prefix sum array
        }
    }
// Taking all the queries as input if the form of Left and Right
    int t;
    cin >> t;
    while (t--) {
        int l = 0, r = 0;
        cin >> l >> r;
// Now making sure if all the ranges of L and R are positive
        if (l - 1 >= 0) {
            cout << pref[r] - pref[l - 1] << endl;
        } else {
            cout << pref[r] << endl;
        }
    }
    return;
}
    int main() {
    init_code();
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
//node* root=NULL;
//creating a tree;
//root =buildtree();
   cout << fixed << setprecision(12);
 //   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}