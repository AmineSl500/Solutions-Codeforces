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
long long total = 0;
for(int i = 0;i < n;i++)
{
    cin>>A[i];
    total += A[i];
}
long long sum[n];
sum[0] = A[0];
map<long long,long long>bad;
for(int i = 1;i <  n;i++)
{
    sum[i] = sum[i-1] + A[i];
}
for(int i = n-1;i >= 0;i--)
{
    bad[total - sum[i]] = i+1;
}
long long maxx = 0;
for(int i = 0;i < n;i++)
{
    if(bad[sum[i]] > i)
    {
        if(maxx < sum[i])
        {
            maxx = sum[i];
        }
    }
}
cout<<maxx;
     return 0;
}
