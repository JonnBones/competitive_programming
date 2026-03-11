#include <bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl cout<<"\n"
#define pb push_back
#define int long long
#define srt(v)  sort(v.begin(),v.end())
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
   int x1,y1;cin>>x1>>y1;
   int x2,y2;cin>>x2>>y2;
   int x3,y3;cin>>x3>>y3;
   int x4,y4;cin>>x4>>y4;

   int a=((max(x2,x4))-min(x1,x3));
   int b=((max(y2,y4))-min(y1,y3));
   int ans=max(a,b);
   cout<<ans*ans;nl;
}

int32_t main()
{
    ios;
    auto begin = std::chrono::high_resolution_clock::now();
    int t;
    t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}