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
int A[n+1],B[n+1];
for(int i = 1;i <= n;i++)
{
    cin>>A[i];
    B[i] = A[i];
}
sort(B+1,B+n+1);
map<int,int>res;
int sum = 0;
for(int i = n;i>= n - m+1;i--)
{
    res[B[i]]++;
    sum += B[i];
    //cout<<B[i]<<endl;
}
cout<<sum<<endl;
int first = 0;
int num = 0;
for(int i = 1;i <= n;i++)
{
   // cout<<B[i]<<endl;
    if(res[A[i]] != 0)
    {
        res[A[i]]--;
        num++;

        if(num != m)
        {

        cout<<i - first<<" ";

        }
        else{
            cout<<n- first;
        }
        first = i;
        
    }
}
     return 0;
}
