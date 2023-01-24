#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
std::ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i = 0;i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0;i < m;i++)
        {
            cin>>b[i];
        }
        map<int,int>done;
        int where = 0;
        long long sum = 0;
        int del = 0;
        for(int i = 0;i < m;i++)
        {
            if(done[b[i]] == 1)
            {
                sum++;
                del++;
            }
            else{
            for(int j = where;j < n;j++)
            {
                done[a[j]] = 1;
                if(a[j] == b[i])
                {

                    sum += (j-del) * 2 + 1;
                    where = j+1;
                    del++;
                    //cout<<sum<<" lol"<<endl;
                    break;
                }
            }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
