#include <bits/stdc++.h>
using namespace std;

#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define nl cout<<"\n"
#define pb push_back
// #define int long long
#define srt(v)  sort(v.begin(),v.end())
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
   int n;cin>>n;
   vector<int>arr(n);
   vector<bool>brr(n+1,false);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   for(int i=0;i<=n-1;i++)
   {
    brr[arr[i]]=true;
   }
   for(int i=0;i<=n;i++)
   {
    if(brr[i]==false)
    {
        cout<<i;nl;
        return;
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
    //cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}