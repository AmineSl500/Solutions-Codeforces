#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const int maxx = 19683;
int result;
int fresult;
int n;
void rec(int ind)
{
    if(result >= n)
    {
        fresult = min(result,fresult);
    }
    result += pow(3,ind);
   // cout<<result<<" "<<ind<<endl;
    for(int i = ind + 1;i < 10;i++)
    {
        rec(i);
    }
    result -= pow(3,ind);

}

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
       fresult = maxx;
       cin>>n;
       for(int i = 0;i < 10;i++)
       {
           result =0;
           rec(i);
       }
       cout<<fresult<<endl;
   }
    return 0;
}
