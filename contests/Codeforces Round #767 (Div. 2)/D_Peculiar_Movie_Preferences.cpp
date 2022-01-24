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
bool check(string a, string b)
{
    a+=b;
    int i=0, j=a.size()-1;
    while(i<j)
    {
        if(a[i]!=a[j]) return false;
        i++;j--;
    }
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    set<string> v;
    string s;
    set<string> set1, set2;
    int ans=0; 
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(ans) continue;
        string rev = s;
        reverse(all(rev));
        if(rev == s)
        {
            ans = 1;
            continue;
        }
        else if(s.size()==2)
        {
            if(set1.find(rev) != set1.end() || set2.find(rev) != set2.end())
            {
                ans = 1;
            }
            set1.insert(s);
        }
        else if(s.size() == 3)
        {
            if(set2.find(rev) != set2.end() || set1.find(rev.substr(0, 2)) != set1.end()) ans=1;
            set2.insert(s);
            set2.insert(s.substr(0,2));
        }
    }
    if(ans==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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