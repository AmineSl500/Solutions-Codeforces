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
       for(int i = 1;i <= n;i++)
       {
           int sum = 1;
           int j = i;
           while(a[j] != i)
           {
               j = a[j];
               //cout<<i<<" "<<j<<endl;
               sum++;
           }
           cout<<sum<<" ";
       }
       cout<<endl;
   }
    return 0;
}
