Krishna is not getting the reason and solution for the below given series:

2+9+4+1= 7

3+5+0+7+2= 8

7+1+8+6= ?

Now you have to write a generic program to find the logic behind the given statement and help Krishna to solve any series like this.

Input Format

First line will contain no. of elements in series (n) Second line will contain elements seprated by space

Constraints

0<=n<=15
value of elements 0<=n[i]<=99
Output Format

Will contain only one line output i.e the result after evaluvating the series.

Sample Input 0

4
2 9 4 1
Sample Output 0

7
Sample Input 1

5
3 5 0 7 2
Sample Output 1

8



////Solution////



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,sum1=0,sum2=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum1= sum1+a[i];
    }
    while(sum1!=0)
    {
        int r;
        r=sum1%10;
        sum1=sum1/10;
        sum2=sum2+r;
    }
    
cout<<sum2;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
