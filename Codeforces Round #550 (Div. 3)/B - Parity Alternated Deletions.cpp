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
    int A[n];
    int p = 0;
    int sum = 0;
    int im = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>A[i];
        sum += A[i];
        if(A[i] % 2 == 0)
        {
            p++;
        }
        else{
            im++;
        }
    }
    sort(A,A+n,greater<int>());
    int impaire[im];
    int paire[p];
    int comptep = 0;
    int compteim = 0;
    for(int i = 0;i < n;i++)
    {
        if(A[i] % 2 == 0)
        {
            paire[comptep] = A[i];
            comptep++;
        }
        else{
            impaire[compteim] = A[i];
            compteim++;
        }
    }


    int sum1 = 0;
    for(int i = 0;i < min(p,im);i++)
    {
        sum1 += impaire[i] + paire[i];
    }

    if(p < im)
    {
        sum1 += impaire[p];
        //cout<<impaire[p];
    }
    else if(p>im){
        sum1 += paire[im];
    }
    cout<<sum-sum1;
    return 0;

}
