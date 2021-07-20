#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
#define F first
#define S second
typedef vector<pli> vpli;
#define INF 1000000007
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
#define tests int t; cin>>t; while(t--)
#define take(a,b,c) for(b=0;b<c;b++) cin>>a[b];
typedef long long ll;
vector<int> adj[200007];
bool visited[200007];
int inputorder[200007], relorder[200007];
bool cmp(int a, int b) {
    return relorder[a] < relorder[b];
}
int neighborX[4] = {0, 0, 1, -1};
int neighborY[4] = {1, -1, 0, 0};
string stepDir = "RLDU";
string inv(string s)
{
    int n = (int)s.size() / 2;
    return s.substr(n, n) + s.substr(0, n);
}
signed main()
{
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    /*
    Code goes here
    */

#ifndef ONLINE_JUDGE
    freopen("random_07.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    bool stat = false;
    for (int i = 0; i < q; i++)
    {
        int t, a, b; cin >> t >> a >> b;
        if (t == 1 && stat == false)
        {
            char temp = s[b - 1];
            s[b - 1] = s[a - 1];
            s[a - 1] = temp;
        }
        else if (t == 1 && stat == true)
        {
            int new_a;
            int new_b;
            if (a <= n)
                new_a = a + n;
            if (a > n)
                new_a = a - n;
            if (b <= n)
                new_b = b + n;
            if (b > n)
                new_b = b - n;
            char temp = s[new_b - 1];
            s[new_b - 1] = s[new_a - 1];
            s[new_a - 1] = temp;
        }

        else
        {
            stat = !(stat);

        }
        //cout << "debug " << stat << endl;
    }
    // cout << s << endl;
    // cout << stat << endl;
    //cout << s << " Debug" << endl;
    if (!(stat))
        cout << s;
    else
    {

        cout << inv(s);


    }
    // end = std::chrono::high_resolution_clock::now();
    // ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    // cout << "\nElapsed Time: " << elapsed_time << "ms\n";


}
