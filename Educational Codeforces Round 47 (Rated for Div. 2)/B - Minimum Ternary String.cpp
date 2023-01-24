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
 string s;
 cin>>s;
 int sum[s.length()] = {0};
 int n = s.length();
 for(int i = 0;i < n;i++)
 {
     sum[i] = 0;
 }
 if(s[n-1] == '1')
     {
         sum[n-1] = 1;

     }
 for(int i = s.length()-2;i >= 0;i--)
 {
     if(s[i] == '1'&&i < s.length()-1)
     {
         sum[i] = sum[i+1] + 1;
         continue;
     }

     sum[i] = sum[i+1];
 }
 string res = "";
 for(int i = 0;i < n;i++)
 {
     res+= " ";
 }
 for(int i= n-1;i >= 0;i--)
 {
     if(s[i] == '2')
     {
         s[i] = '0';
         s[i + sum[i]] = '2';
        // cout<<s<<endl;
         //cout<<sum[i]<<endl;
     }
     if(s[i] == '1')
     {
         s[i] = '0';
     }
 }
 //cout<<s<<endl;
 int done = 0;
  int ss = sum[0];
 for(int i = 0;i < n;i++)
 {

     if(s[i] == '2')
     {
         done= 1;
         int k = i-1;

         while(ss > 0)
         {
             if(s[k] == '0')
             {
                 s[k] = '1';
             }
             k--;
             ss--;
         }

     }
 }

  if(done == 1)
  {
      cout<<s;
      //cout<<"lol";
      return 0;
  }
 if(done != 1)
 {
  for(int i = 0;i < n - sum[0];i++)
  {
      cout<<0;
  }
  for(int i = 0;i < sum[0];i++)
  {
      cout<<1;
  }
 }

     return 0;
}
