#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isPowerOfTwo(int n)
{
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
    #endif

   std::ios::sync_with_stdio(false);
 int n,m;
 cin>>n>>m;
 int A[n],B[m];
 int sum = 0;
 for(int i = 0;i < n;i++)
 {
     cin>>A[i];
 }
 for(int i = 0;i < m;i++)
 {
     cin>>B[i];
 }
 for(int i = 0;i < n;i++)
 {
     if(A[i] <= B[sum])
     {
         if(sum == m)
         {
            break;
         }
         sum++;

     }
 }
 cout<<sum;
     return 0;
}
