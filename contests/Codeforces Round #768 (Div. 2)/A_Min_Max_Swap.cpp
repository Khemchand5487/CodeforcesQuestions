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
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    int maxa=INT_MIN, maxb = INT_MIN;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        maxa = max(a[i], maxa);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        maxb = max(b[i], maxb);
    }

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        if(maxa>maxb)
        {
            v.push_back({b[i], a[i]});
        }
        else v.push_back({a[i], b[i]});
    }
    
    sort(all(v));
    for(int i=n-1;i>=0;i--)
    {
        if(v[i].first > v[i].second)
        {
            swap(v[i].first, v[i].second);
        }
    }
    
    int maxf=INT_MIN;
    for(auto i: v)
    {
        maxf = max(maxf, i.first);
    }
    int maxz = maxb<maxa ? maxa: maxb;
    cout<<maxz*maxf<<endl;
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