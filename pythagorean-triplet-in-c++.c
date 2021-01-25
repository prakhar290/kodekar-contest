Raman have a non negative integer A, and he wants to get all pythagorean triplets including 0. print all the pairs of integers(a,b) such that

a and b are positive integers

a<=b and

a^2 + b^2 = A

0 <= A

Input Format

First line contains T , number of test cases. Next T lines contain a single integer A each.

Constraints

A <= 1000

Output Format

T lines each containing a pair (a,b) in sorted order.

Sample Input 0

3
1
9
25
Sample Output 0

(0,1)
(0,3)
(0,5) (3,4)



/// solution ///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,ele,sum=0;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=a[i];j++)
        {
            for(int k=j+1;k<=a[i];k++)
            {
                sum = j*j + k*k;
                if(sum == a[i])
                    cout<<"("<<j<<","<<k<<") ";
                sum=0;
            }
        }
        cout<<"\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}