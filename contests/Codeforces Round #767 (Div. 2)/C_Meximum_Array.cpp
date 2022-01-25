/** Solution By khemchand5487 **/

#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define debug(x) cout << #x <<" "; _print(x); cout << endl;

typedef long long ll;

//for debugging
template <class T>
void _print(T t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.first); cout << ","; _print(p.second); cout << "}" << endl;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T, class V> void _print(unordered_map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]" << endl;}
//END

//reading input 
template<typename... T>
void input(T&... args) {(((cin>>args), ...));}

//writing output
template<typename... T>
void output(T... args) {(((cout<<args<<" "), ...));  cout<<endl;}

////////solution goes here////////
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    vector<vector<ll>> idx(n+2);
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        idx[a[i]].push_back(i);
    }
    vector<ll> ans;
    ll l = 1;
    while(l<=n)
    {
        ll mex = 0;
        ll r = l;
        while(mex<=(n+1))
        {
            auto it = lower_bound(all(idx[mex]), l);
            if(it == idx[mex].end()) break;
            
            r = max(r, *it);
            mex++;
        }
        ans.push_back(mex);
        l = r+1;

    }
    
    cout<<ans.size()<<endl;
    for(ll i: ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

/** Solution By khemchand5487 **/