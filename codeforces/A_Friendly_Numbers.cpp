#include <bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl cout<<"\n"
#define pb push_back
#define int long long
#define srt(v)  sort(v.begin(),v.end())
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int d(int y)
{
    int sum=0;
    while(y>0)
    {
        sum+=y%10;
        y=y/10;
    }
    return sum;
}
void solve()
{
   int x;cin>>x;
   int cnt=0;
   for(int y=x;y<=x+81;y++)
   {
    if(y-d(y)==x)
    {
        cnt++;
    }
   }
   cout<<cnt;nl;
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
