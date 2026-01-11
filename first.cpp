#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
#define PI 3.141592653589793238

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main()
{
    fastIO();
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string st;
        cin >> st;
      cout<<st;
    }
    return 0;
}
