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
        if (st == "first")
        {
            ll n;
            cin >> n;
            vector<ll> arr(n);
            string a = "abcdefghijklmnopqrstuvwxyz";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            string temp = "";
            for (int i = 0; i < n; i++)
            {
                vector<int> tt;
                ll val = arr[i];
                while (val)
                {
                    tt.push_back(val % 10);
                    val /= 10;
                }
                if (tt.empty())
                    tt.push_back(0);
                reverse(tt.begin(), tt.end());
                for (int j = 0; j < (int)tt.size(); j++)
                    temp += a[tt[j]];
                while (tt.size() < 10)
                {
                    tt.push_back(0);
                    temp += 'z';
                }
            }
          
            cout << temp << endl;
        }
        else
        {
            string b;
            cin >> b;
            vector<string> p;
            string a = "abcdefghijklmnopqrstuvwxyz";
            string temp = "";
            for (int i = 0; i < b.length(); i += 10)
            {
                string ans = "";
                int r = i;
                while (ans.length() < 10 and b[r] != 'z')
                {
                    for (int j = 0; j < 26; j++)
                    {
                        if (b[r] == a[j])
                        {
                            ans += to_string(j);
                            break;
                        }
                    }
                    r++;
                }
                p.push_back(ans);
            }

            cout << p.size() << endl;
            for (int i = 0; i < p.size(); i++)
            {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
