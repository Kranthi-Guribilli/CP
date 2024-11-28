#include<bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fi(a,b) for(long long int i=a;i<b;i++)
#define t_cases_loop()         int t; cin >> t; while(t--)


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
ll bs_sqrt(ll n);
int dx[4]={-1,1,-1,1}, dy[4]={-1,-1,1,1};
 
void solve(){
    int n;
    cin>>n;
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0){
        n /= 2;
        ++cnt2;
    }
    while(n % 3 == 0){
        n /= 3;
        ++cnt3;
    }
    if(n == 1 && cnt2 <= cnt3){
        cout << 2 * cnt3 - cnt2 << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    t_cases_loop(){
    solve();
    }
}

ll bs_sqrt(ll n){
    ll l = 0, r=1e9, ans=0;
    if(n==0 or n==1) return n;
 
    while(l<=r){
        ll m= l+(r-l)/2;
        if(m*m == n) return m;
 
        if(m*m>n)
            r=m-1;
 
        if(m*m<n){
            l = m+1;
            ans = m;
        } 
    }
 
    return ans;
}
