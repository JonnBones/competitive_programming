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
   vector<vector<int>>arr(n,vector<int>(n));
   int x=1;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        arr[i][j]=x;
        x++;
    }
   }
   if(n==1)
   {
    cout<<1;nl;
    return;
   }
   else if(n==2)
   {
    cout<<9;nl;return;
   }
   int a = arr[n-1][n-1] + arr[n-1][n-2] + arr[n-1][n-3] +arr[n-2][n-2];
   int b = arr[n-2][n-2] + arr[n-2][n-3] + arr[n-2][n-1] + arr[n-3][n-2] + arr[n-1][n-2];
   cout<<max(a,b);nl;
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