Determines whether elements in an array can be re-arranged to form a consecutive list of numbers where each number appears exactly once.

[5, 1, 4, 3, 2] ➞ true

[5, 1, 4, 3, 2, 8]) ➞ false

Input Format

first line consists single integer N(length of array) second line consists N-separated values of array.

Constraints

0<=N<=100

Output Format

output should be 1 for true otherwise 0.

Sample Input 0

5
5 1 4 3 2
Sample Output 0

1
Sample Input 1

6
5 1 4 3 2 8
Sample Output 1

0



///solution///



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i+1] - a[i] != 1)
        {
            flag =1;
            break;
        }
    }
    if(flag == 0)
        cout<<1;
    else
    {
        cout<<0;
    }
    
    
    return 0;
}