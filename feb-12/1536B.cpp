// Header Files
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <utility>
#include <set>
#include <unordered_set>
#include <list>
#include <iterator>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <random>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <complex>
#include <math.h>
#include <cstring>
#include <chrono>
#include <string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End
#define ll long long
#define f(i, n) for (long long int i = 0; i < n; i++)
#define fo(i, a, b) for (long long int i = a; i < b; i++)
#define fe(i, a, b) for (long long int i = a; i <= b; i++)
#define vl vector<ll>
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define mii map<int, int>
#define umll unordered_map<ll, ll>
#define umii unordered_map<int, int>
#define rev(v) reverse(all(v))
#define vpl vector<pll>
#define vvi vector<vi>
#define vvl vector<vl>
#define mod 1000000007
#define maxn 1000005
#define sz(x) (ll) x.size()
#define all(v) (v).begin(), (v).end()
#define sor(v) sort(all(v))
#define pb(a) push_back(a)
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
// policy based data structure
// using namespace __gnu_pbds;
// template <class T>
//  using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//  template <class T>
//  using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
ll read(vector<ll> &v);
void print(vector<ll> &v);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi v(26, 0);
    f(i, n) v[s[i] - 'a']++;
    f(i, 26) if (v[i] == 0)
    {
        char x = 'a' + i;
        cout << x << "\n";
        return;
    }
    /// length 2---
    set<string> st;
    fo(i, 1, n)
    {
        string temp = "";
        temp += s[i - 1];
        temp += s[i];
        st.insert(temp);
    }
    f(i, 26)
    {
        f(j, 26)
        {
            string t = "";
            t += 'a' + i;
            t += 'a' + j;
            if (st.find(t) == st.end())
            {
                cout << t << "\n";
                return;
            }
        }
    }
    st.clear();
    fo(i, 2, n)
    {
        string temp = "";
        temp += s[i - 2];
        temp += s[i - 1];
        temp += s[i];
        st.insert(temp);
    }
    f(i, 26)
    {
        f(j, 26)
        {
            string t = "a";
            t += 'a' + i;
            t += 'a' + j;
            if (st.find(t) == st.end())
            {
                cout << t << "\n";
                return;
            }
        }
    }

    return;
    // print(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // vector<ll> v;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
ll read(vl &a)
{
    ll n = a.size();
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    return sum;
}
void print(vector<ll> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
