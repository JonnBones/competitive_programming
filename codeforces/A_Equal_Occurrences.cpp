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
   vector<int>arr(n);
   unordered_map<int,int>ump(n);
   vector<int>brr;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    ump[arr[i]]++;
   }

   for(auto i:ump)
   {
    int x = i.second;
    brr.pb(x);
   }
   srt(brr);
   int cnt=0;int ans=0;
   for(int i=0;i<brr.size();i++)
   {
    for(int j=i;j<brr.size();j++)
    {
        if(brr[i]<=brr[j])
        {
            cnt++;
        }
    }
    // cout<<brr[i];nl;
    // cout<<cnt;nl;
    ans=max(ans,brr[i]*cnt);
    //cout<<ans;nl;nl;
    cnt=0;
   }
   cout<<ans;nl;
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
    //cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}