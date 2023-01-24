#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
   int q;
   cin>>q;
   while(q--)
   {
       int n;
       cin>>n;
       int a[n+1];
       for(int i = 1;i<= n;i++)
       {
           cin>>a[i];
       }
       map<int,int>res;
       map<int,int>done;

      for(int i = 1;i <= n;i++)
       {
           if(done[a[i]] == 0)
           {
           int sum = 1;
           int j = i;
           while(a[j] != i)
           {
               done[a[j]]++;
               j = a[j];
               sum++;
           }
           j = i;
           if(a[j] == i)
           {
               res[a[j]] = sum;
           }
           while(a[j] != i)
           {
               res[a[j]] = sum;
               j = a[j];
           }
           }


       }
            for(int i = 1;i <= n;i++)
           {
               cout<<res[a[i]]<<" ";
           }
       cout<<endl;
   }
    return 0;
}
