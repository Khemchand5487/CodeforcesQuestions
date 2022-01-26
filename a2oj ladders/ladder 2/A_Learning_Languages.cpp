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
void dfs(int x, vector<int>* adj, vector<bool>& visited)
{
    visited[x] = true;
    int n = adj[x].size();
    for(int i=0;i<n;i++)
    {
        if(!visited[adj[x][i]]) dfs(adj[x][i], adj, visited);
    }
}

void solve()
{
    int n, m;
    input(n, m);
    vector<int> adj[m+n+2];
    int a, cnt=0, b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cnt+=a;
        for(int j=0;j<a;j++)
        {
            cin>>b;
            adj[i+1].push_back(b+n);
            adj[b+n].push_back(i+1);
        }
    }
    // _print(adj);
    if(cnt==0) cout<<n<<endl;
    else 
    {
        cnt=0;
        vector<bool> visited(n+m+2, false);
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
            {
                cnt++;
                dfs(i, adj, visited);
            }
        }
        cout<<(cnt-1);
    }
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