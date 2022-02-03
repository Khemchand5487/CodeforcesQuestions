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
    // cout<<((int)('b'-'a'))<<endl;
    string s;
    int k;
    input(s, k);
    int mx=INT_MIN, x;
    vector<int> v(26);
    for(int i=0;i<26;i++)
    {
        cin>>x;
        v[i] = x;
        mx = max(mx, x);
    }
    int f=0, j=1;
    for(char i: s)
    {
        f+=(v[(int)(i-'a')]*j);
        j++;
    }
    while(k--)
    {
        f+=(mx*j);
        j++;
    }
    cout<<f;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

/** Solution By khemchand5487 **/