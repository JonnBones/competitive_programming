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
   int c;cin>>c;
   int k;cin>>k;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   srt(arr);
   for(int i=0;i<n;i++)
   {
    if(arr[i]<=c)
    {
        if(arr[i]+k<=c)
        {
            c+=arr[i]+k;
            k=0;
        }
        else
        {
            int req=c-arr[i];
            c+=req+arr[i];
            k=k-req;
        }
    }
   }
   cout<<c;nl;
   
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