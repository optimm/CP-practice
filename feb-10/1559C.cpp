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
    vl a(n);
    ll sum = read(a);
    vl ans(n + 1, 0);
    f(i, n + 1) ans[i] = i + 1;
    if (a[n - 1] == 0)
    {
        print(ans);
        return;
    }
    if (a[0] == 1)
    {
        rotate(ans.begin(), ans.begin() + n, ans.end());
        print(ans);
        return;
    }

    ll answer = -1;
    f(i, n - 1)
    {
        if (a[i] == 0 && a[i + 1] == 1)
        {
            answer = i + 1;
            break;
        }
    }
    cerr << answer << " ";
    if (answer == -1)
        cout << "-1\n";
    else
    {
        fe(i, 1, answer)
        {
            cout << i << " ";
        }

        cout << n + 1 << " ";

        for (ll i = answer + 1; i <= n; i++)
            cout << i << " ";

        cout << "\n";
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
