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
#define vpl vector<pll>;
#define vvi vector<vi>;
#define vvl vector<vl>;
#define mod 1000000007
#define maxn 1000005
#define sz(x) (ll) x.size()
#define all(v) (v).begin(), (v).end()
#define sor(v) sort(all(v))
#define rev(v) reverse(all(v))
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
bool c_p(string s)
{
    string r = s;
    rev(r);
    return (r == s);
}
ll min_del(string s, char c)
{
    int l = 0, r = sz(s) - 1;
    ll ans = 0;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            if (s[l] == c)
            {
                l++;
                ans++;
            }
            else if (s[r] == c)
            {
                r--;
                ans++;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            l++;
            r--;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (c_p(s))
    {
        cout << "0\n";
        return;
    }
    // 26 chars ke liye bhi kar sakte the-----------
    // jab bhi string ka aaye kuch -- ya char ka to for every zaroor consider karna
    unordered_map<char, ll> mp;
    f(i, n)
    {
        mp[s[i]]++;
    }
    ll ans = 1000000000;
    for (auto x : mp)
    {
        char m = x.first;
        ll res = min_del(s, m);
        if (res != -1)
        {
            ans = min(ans, res);
        }
    }
    if (ans == 1000000000)
        ans = -1;

    cout << ans << "\n";

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
