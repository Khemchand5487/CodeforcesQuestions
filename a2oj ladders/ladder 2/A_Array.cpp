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
void output(T... args) {(((cout<<args<<" "), ...)); cout<<endl;}

////////solution goes here////////
void solve()
{
    int n, x;
    cin>>n;
    vector<int> pos, neg, zero;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0) neg.push_back(x);
        else if(x>0) pos.push_back(x);
        else zero.push_back(x);
    }

    int n1 = neg.size(), n2 =pos.size(), n3=zero.size();
    if(n2 == 0)
    {
        pos.push_back(neg[n1-1]);
        pos.push_back(neg[n1-2]);
        neg.pop_back();
        neg.pop_back();
        n1-=2;
        n2+=2;
    } 
    if(n1%2 == 0)
    {
        zero.push_back(neg[n1-1]);
        neg.pop_back();
        n1-=1;
        n3+=1;
    }

    cout<<n1<<" ";
    for(int i: neg)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<n2<<" ";
    for(int i: pos)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<n3<<" ";
    for(int i: zero)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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