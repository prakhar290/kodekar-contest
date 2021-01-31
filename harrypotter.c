#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,sum=0,a,avg=0,smoke=0;
    cin>>n;
    vector <int> vec;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    vector <int> vec2;
    for(int j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
    {
        sum = vec[i]+vec[i+1];
        avg = sum%100;
        smoke = (vec[i]*vec[i+1]) + (avg * vec[i+2]);
        sum = 0;
        avg = 0;
        vec2.push_back(smoke);
            
        }   
        smoke=0;
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}