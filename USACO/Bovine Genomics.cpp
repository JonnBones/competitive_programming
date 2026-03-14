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
   int n,m;cin>>n>>m;
   vector<string>arr(n);
   vector<string>brr(n);
   
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>brr[i];
   }
   
   int cnt=0;
   for(int j=0;j<m;j++)
   {
    set<char>a1;
    for(int i=0;i<n;i++)
    {
      a1.insert(arr[i][j]);
    }
    
    bool mark = true;
    for(int i=0;i<n;i++)
    {
      if(a1.count(brr[i][j])!=0)
      {
        mark=false;
        break;
      }
    }
    
    if(mark==true)
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
