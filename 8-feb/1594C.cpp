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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    ll o = 0, e = 0;

    f(i, n)
    {
        if (s[i] != c)
        {
            (i + 1) % 2 == 0 ? (e++) : (o++);
        }
    }

    if (e == 0 && o == 0)
    {
        cout << "0\n";
        return;
    }

    for (ll i = 1; i <= n; i++)
    {

        bool flag = true;
        for (ll j = i; j <= n; j += i)
        {
            if (s[j - 1] != c)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "1\n"
                 << i << "\n";
            return;
        }
    }

    cout << "2\n"
         << n << " " << n - 1 << "\n";
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
