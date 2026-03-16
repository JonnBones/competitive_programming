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
   int n;cin>>n;
   string str;cin>>str;
   if(str[0]=='L')
   {
    cout<<1;nl;
    return;
   }
   
   int cnt=0;
   for(int i=0;i<str.size();i++)
   {
    if(str[i]=='R')
    {
      cnt++;
    }
   }
   
   if(cnt==n)
   {
    cout<<n;nl;
   }
   
   for(int i=0;i<n;i++)
   {
    if(str[i]=='R')
    {
      continue;
    }
    else
    {
      if(str[i-1]=='R')
      {
        cout<<i+1;nl;
        return;
      }
    }
   }
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
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}