Write a program that prints the number of times you must carry a digit when you sum together two integers.

(36, 135) ➞ 1 (671, 329) ➞ 3

Input Format

Two integer inputs N and M

Constraints

0<=N,M<=10^6

Output Format

answer in integer

Sample Input 0

36
135
Sample Output 0

1

///solution///

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c=0,d=0,sum=0,count=0,carry=0,lena,lenb;
    cin>>a>>b;
    string stra = to_string(a);
    string strb = to_string(b);
    lena = stra.length();
    lenb = strb.length();
    while(lena!=0||lenb!=0)
    {
       if(lena>0)
       {
           c = stra[lena-1]-'0';
           lena--;
       }
        if(lenb>0)
        {
            d = strb[lenb-1]-'0';
            lenb--;
        }
        sum = c+d+carry;
        if(sum>=10)
        {
            carry=1;
            count++;
        }
        else
            carry=0;
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}