#include<bits/stdc++.h>
using namespace std;

int main(){
   // freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  int s[n];
  for(int lol = 0;lol <n;lol++)
  {
      scanf("%d",&s[lol]);
  }
  int cost[n];
  for(int lol = 0;lol <n;lol++)
  {
      scanf("%d",&cost[lol]);
  }
  long long dp[n] = {0};
  for(int lol = 0;lol <n;lol++)
  {
      dp[lol] = 100000000000;
  }
  for(int i = 0;i <n;i++)
  {
      for(int j = 0;j < i;j++)
      {
          if(s[j] < s[i]&&dp[i] > cost[j])
          {
      dp[i] = cost[j];
      //cout<<i<<" "<<j<<" "<<cost[j]<<endl;
      }

      }
      dp[i] += cost[i];
  }

  long long pluss = 100000000000;
  for(int i = 0;i <n;i++)
  {
      for(int j = i+1;j <n;j++)
      {
          if(s[j] >s[i])
          {
              if(pluss > cost[j])
              {

              pluss = cost[j];
             // cout<<s[j]<<" "<<s[i]<<" "<<i<<" "<<j<<" "<<pluss<<endl;
              }
          }
      }

     // cout<<dp[i]<<" addddd "<<pluss<<" "<<i<<endl;
      dp[i] += pluss;
      pluss = 100000000000;
  }

long long res = 10000000000;
  for(int i = 0;i < n;i++)
  {
     // cout<<dp[i]<<" "<<endl;
      res = min(res,dp[i]);
  }
  if(res == 10000000000)
  {
      cout<<-1;
      return 0;
  }
  cout<<res;
	return 0;
}