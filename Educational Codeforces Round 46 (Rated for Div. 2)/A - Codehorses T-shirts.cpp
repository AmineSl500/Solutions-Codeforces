#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
      //freopen("input.txt","r",stdin);
    #endif

   std::ios::sync_with_stdio(false);
   int n;
   cin>>n;
   string p[n];
   string t[n];
   int sum = 0;
   map<string,int>previous;
   for(int i = 0;i < n;i++)
   {
       cin>>p[i];
   }
   for(int i = 0;i < n;i++)
   {
       cin>>t[i];
   }
   int done[n] = {0};
   for(int i = 0;i < n;i++)
   {
       for(int j = 0;j< n;j++)
       {
           if(p[j] == t[i]&&done[j] == 0)
           {
               sum++;
               done[j] = 1;
               break;
           }
       }
   }
   cout<<n - sum;
     return 0;
}
