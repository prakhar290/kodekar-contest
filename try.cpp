#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float count = 0;
    float counts = 0;
    for(int i = 0;i<n;i++)
    {
        count++;
        int sum = a[i];
            if(sum<=k)
            {
                counts++;
            }
        for(int j=i+1;j<n;j++)
        {
            sum += a[j];
            
            if(sum<=k)
            {
                counts++;
            }
            count++;
        }
    }
    float ans = (counts/count);
    cout<<setprecision(8)<<ans;
    return 0;
}