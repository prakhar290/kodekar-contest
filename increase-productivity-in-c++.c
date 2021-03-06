Mr.Khanna is opening a factory in which he hired M number of male workers and F number of female workers. Now Mr.Khanna have to divide all the workers in K groups such that each group has atleast one male worker. Each pair of workers from a group become friends.

Now to increase the productivity, Mr.Khanna wants to divide them in K groups such that minimum number of male and female pair of friends are possible after dividing them into groups. Your task is to print the minimum number of possible male and female pairs.

Input Format

The input contains three integers M, F, and K(The Number of male workers, female workers, and the required groups respectively).

Constraints

1 ≤ K ≤ M,F ≤ 10^9

Output Format

The output line only contains an integer Y(the minimum number of pairs possible).

Sample Input 0

5 5 3
Sample Output 0

7
Explanation 0

We can divide the given workers in groups as 4, 3 and 3 .

First group have 4 workers which have possible pairs of 3.

Second group have 3 workers which have possible pairs of 2.

Third group have 3 workers which have possible pairs of 2.

so,total pairs that can be formed are 3+2+2= 7.



////solution////

(main code)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    int extra,a,b,c,sum,ans,i,j,out=0;
    scanf("%d%d%d",&a,&b,&c);
    int x[c];
    sum=a+b;
    ans=sum/c;
    if(c%2==0){
        printf("%d", 2*c-2);
        return 0;
    }
    extra=sum%c;
    for(i=0;i<c;i++)
        x[i]=ans;
    for(j=0;j<extra;j++)
        x[j]=x[j]+1;
    for(i=0;i<c;i++)
        out=out+(x[i]-1);
    printf("%d",out);
}



(practice code)


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, f, k,r=0,p=0;
    cin>>m>>f>>k;
    int sum = m+f;
    vector <int> a;
    while(sum>0)
    {
        r=sum/k;
        sum = sum-r;
        a.push_back(r);
        if(k>0)
            k--;
        else
            break;
        }
    int len = a.size();
    for(int i=0;i<len;i++)
    {
        a[i] = a[i]-1;
        p = p +a[i];
    }
    cout<<p;
    return 0;
}


