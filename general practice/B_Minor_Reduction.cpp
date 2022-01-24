/** Solution By khemchand5487 **/

#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define debug(x) cout << #x <<" "; _print(x); cout << endl;

typedef long long ll;

//for debugging
void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(double t) {cout << t;}

template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.first); cout << ","; _print(p.second); cout << "}" << endl;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]" << endl;}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]" << endl;}
//END

//reading input 
template<typename... T>
void input(T&... args) {(((cin>>args), ...));}

//writing output
template<typename... T>
void output(T... args) {(((cout<<args<<" "), ...));}

////////solution goes here////////
void solve()
{
    string s;
        cin >> s;
    
        bool flag = 0;
        int n  =s.size();
        for (int i = n - 1; i > 0; i--)
        {
          int x = s[i] - '0' + s[i - 1] - '0';
    
          if (x > 9)
          {
            flag = true;
            s[i] = x % 10 + '0';
            s[i - 1] = x / 10 + '0';
    
            break;
          }
    
    
        }
        if (flag)
        {
          cout << s << endl;
    
        }
        else {
          cout<<(s[0] - '0' + s[1] - '0');
    
          for (int i = 2; i < n; i++)
          {
            cout<<s[i];
          }
    
          cout<<endl;
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