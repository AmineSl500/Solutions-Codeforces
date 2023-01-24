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
int n;
cin>>n;
int A[n];
for(int i = 0;i < n;i++)
{
    cin>>A[i];
    if(A[i] % 2 == 0)
    {
        A[i]--;
    }
}
for(int i = 0;i < n;i++)
{
    cout<<A[i]<<" ";
}

     return 0;
}
