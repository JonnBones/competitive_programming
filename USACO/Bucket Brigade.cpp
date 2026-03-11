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
   
   vector<vector<char>>arr(10, vector<char>(10));
   for(int i=0;i<10;i++)
   {
    for(int j=0;j<10;j++)
    {
      cin>>arr[i][j];
    }
   }
   
   int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
   for(int i=0;i<10;i++)
   {
    for(int j=0;j<10;j++)
    {
      if(arr[i][j]=='B')
      {
        x1=i+1;y1=j+1;
      }
      else if(arr[i][j]=='L')
      {
        x2=i+1;y2=j+1;
      }
      else if(arr[i][j]=='R')
      {
        x3=i+1;y3=j+1;
      }
    }
   }
   
   int x = abs(x2-x1);
   int y = abs(y2-y1);
   int ans=x+y-1;
   if((x1==x3 && x1==x2) && ((y1<y3 && y3<y2) || (y2<y3 && y3<y1)))
   {
     ans+=2;
   }
   else if((y1==y2 && y1==y3) && ((x1<x3 && x3<x2) || (x2<x3 && x3<x1)))
   {
    ans+=2;
   }
   
   cout<<ans;nl;
   
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
