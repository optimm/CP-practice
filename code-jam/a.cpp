#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \ 
    cout.tie(0)
#define cendl cout << endl
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int, int>
#define vpi vector<pi>
#define umi unordered_map<int, int>
#define si set<int>
#define sz(x) x.size()
#define repl(i, initial, n) for (int i = initial; i < n; i++)
#define replr(i, initial, n) for (int i = initial; i >= n; i--)
#define repla(i, a) for (auto i : a)
#define repli(i, a) for (auto i = a.begin(); i != a.end(); i++)
#define asort(a) sort(a.begin(), a.end())
#define dsort(a) sort(a.begin(), a.end(), greater<int>())
#define all(v) v.begin(), v.end()
#define pb push_back
#define imax LONG_MAX
#define imin LONG_MIN
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define minus cout << "-1" << endl;
#define mod 1000000007
bool debugg = false;
#define read(arr)                        \
    for (int i = 0; i < arr.size(); i++) \
        cin >> arr[i];
#define readm(arr, n, m)                    \
    arr.resize(n);                          \
    repl(i, 0, n)                           \
    {                                       \
        arr[i].assign(m, 0);                \
        repl(j, 0, m) { cin >> vec[i][j]; } \
    }
#define debArr(arr)                         \
    if (debugg)                             \
    {                                       \
        cout << #arr << " : ";              \
        repla(itr, arr) cout << itr << " "; \
        cendl;                              \
    }
#define debMat(mat)                                 \
    if (debugg)                                     \
    {                                               \
        cout << #mat << endl;                       \
        repla(row, mat)                             \
        {                                           \
            {                                       \
                repla(col, row) cout << col << " "; \
            }                                       \
            cendl;                                  \
        }                                           \
    }
#define debMap(mp)                                                              \
    if (debugg)                                                                 \
    {                                                                           \
        cout << #mp << endl;                                                    \
        repla(itr, mp) cout << "{" << itr.first << ", " << itr.second << "}\n"; \
        cendl;                                                                  \
    }
#define deb(var)                              \
    if (debugg)                               \
    {                                         \
        cout << #var << " = " << var << endl; \
    }
#define deb2(var1, var2)                                                         \
    if (debugg)                                                                  \
    {                                                                            \
        cout << #var1 << " = " << var1 << " " << #var2 << " = " << var2 << endl; \
    }
#define deb3(var1, var2, var3)                                                                                    \
    if (debugg)                                                                                                   \
    {                                                                                                             \
        cout << #var1 << " = " << var1 << " " << #var2 << " = " << var2 << " " << #var3 << " = " << var3 << endl; \
    }
#define write(arr)                       \
    for (int i = 0; i < arr.size(); i++) \
    {                                    \
        cout << arr[i] << " ";           \
    }                                    \
    cendl;
int q, w;

void solve()
{
    int n;
    cin >> n;
    vi vec(n);
    read(vec);
    asort(vec);
    int curr = 1, i = 0;
    while (i < n)
    {
        if (curr <= vec[i])
        {
            curr++;
        }
        i++;
    }
    cout << curr - 1 << endl;
}
int32_t main()
{

    fast;
    int T = 1;
    int i = 1;
    cin >> T;
    while (i <= T)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}