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
       int a[n];
       for(int i = 0;i < n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       int sum = 1;
       for(int i = 0;i < n-1;i++)
       {
           if(a[i] == a[i+1] -1)
           {
               sum++;
               break;
           }
       }
       cout<<sum<<endl;
   }
    return 0;
}
