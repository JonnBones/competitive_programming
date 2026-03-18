#include <bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl cout<<"\n"
#define pb push_back
#define int long long
#define srt(v)  sort(v.begin(),v.end())
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int lcm(int x,int y)
{
    return (x*y/__gcd(x,y));
}
void solve()
{
   int a,b,c,m;cin>>a>>b>>c>>m;
   int ab = lcm(a,b);
   int bc = lcm(b,c);
   int ac = lcm(c,a);
   int abc= lcm(ab,c);
   
   int x = m/a*6 -m/ab*3 - m/ac*3 + m/abc*2;
   int y = m/b*6 - m/ab*3 - m/bc*3 + m/abc*2;
   int z = m/c*6 - m/ac*3 - m/bc*3 + m/abc*2;
   cout<<x<<" "<<y<<" "<<z;nl;
}

int32_t main()
{
    ios;
    auto begin = std::chrono::high_resolution_clock::now();
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
