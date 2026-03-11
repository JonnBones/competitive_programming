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
   int k;cin>>k;
   vector<string>arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   cout<<arr[0];
   int x=arr[0].size();
   
   for(int i=1;i<n;i++)
   {
    if(x+arr[i].size()<=k)
    {
      cout<<" "<<arr[i];
      x+=arr[i].size();
    }
    else
    {
      cout<<"\n"<<arr[i];
      x=arr[i].size();
    }
   }
   
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