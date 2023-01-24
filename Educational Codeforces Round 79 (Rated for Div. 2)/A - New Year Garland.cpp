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
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2] -a[0]-a[1] >= 2)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
