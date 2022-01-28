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
    int n,k;
    cin>>n>>k;
    vector<int> v;

    for(int i=0;i<n;i++) v.push_back(i);

    if( k==3 &&   n==4)
    {
        cout<<-1<<endl;
        return;  
    }
    else if( k==0)
    {
        cout<<v[0]<<" "<<v[n-1]<<endl;
        v[0]=-1;
        v[n-1]=-1;
    }
    else if(k==n-1)
    {
        cout<<v[n-1]<<" "<<v[n-2]<<endl;
        cout<<v[n-3]<<" "<<v[1]<<endl;
        cout<<v[2]<<" "<<v[0]<<endl;

        v[1]=-1;
        v[2]=-1;
        v[0]=-1;
        v[n-1]=-1;
        v[n-2]=-1;
        v[n-3]=-1;

    }
    else
    {
        cout<<v[k]<<" "<<v[n-1]<<endl;
        cout<<v[n-1-k]<<" "<<v[0]<<endl;

        v[n-1-k]=-1;
        v[0]=-1;
        v[k]=-1;
        v[n-1]=-1;
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]!=-1 && v[n-1-i]!=-1)
        {
            cout<<v[i]<<" "<<v[n-1-i]<<endl;
            v[i]=-1;
            v[n-1-i]=-1;
        }
    }
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