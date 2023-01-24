#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
    #endif

   std::ios::sync_with_stdio(false);
   int n,m;
   cin>>n>>m;
   int A[n+2];
   A[0] = 0;
   A[n+1] = m;
   int sum = 0;

   for(int i=  1;i <= n+1;i++)
   {
       cin>>A[i];
       if(i % 2 == 1)
       {
          sum += A[i] - (A[i - 1]);
       }
   }

   int s[n + 2] = {0};
   s[0] = 0;
 // cout<<sum<<"looooooool"<<endl;;
   int res = sum;
   int maj = 0;
   for(int i = 1;i <= n+1;i++)
   {
       if(i % 2 == 1)
       {
           maj += (A[i] - A[i - 1]);
           s[i] = maj;

           //cout<<s[i]<<" "<<sum<<" "<<(A[i] - A[i - 1])<<" "<<A[i]<<" "<<A[i-1]<<endl;;
       }
       else{

        s[i] = s[i - 1];
       }
   }

   int inter = 0;
   for(int i = 0;i <= n;i++)
   {


           inter = s[i] + (A[i+1] - A[i] - 1) + (m - (sum-s[i+1]) - A[i+1]);
           // cout<<(m - s[i+1] - A[i+1])<<endl;
         //  cout<<inter<<" par "<<endl;
          /* for(int j = i+1;j <= n;j++)
           {
            if(j  %2 == 0)
            {
                inter += A[j+1] - A[j];
              //  cout<<A[i+1]<<" "<<A[i]<<endl;
            }
           }*/



        //cout<<inter<<" impar "<<endl;
         /*  for(int j = i+1;j <= n;j++)
           {
            if(j  %2 == 1)
            {
                inter += A[j+1] - A[j];
            }
           }*/

       res = max(res,inter);
      // cout<<inter<<" "<<s[i]<<endl;
   }
   cout<<res;
     return 0;
}
