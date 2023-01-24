#include <bits/stdc++.h>
#include <string>
using namespace std;

int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n;
    cin>>n;
    for(int t =  0;t < n;t++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int yes = 1;
        for(int i = 0;i < s.length() - 1;i++)
        {
            if(int(s[i]) != int(s[i+1])-1)
            {
                yes = 0;
            }
        }
        if(yes)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;

}
