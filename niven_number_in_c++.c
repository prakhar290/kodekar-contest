Niven numbers are positive integers greater than 0 that are divisible by the sum of their digits.

Print 1 if entered number is Niven, otherwise 0.

Input Format

Input consists an integer value N.

Constraints

1<=N<=10^6

Output Format

1 if true, otherwise 0

Sample Input 0

42
Sample Output 0

1
Explanation 0

42 is a Niven number

42 is divisible by 4+2=6.



///solution////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num,sum=0,rem,a;
    cin>>num;
    a=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    int div=a%sum;
    if(div==0)
        cout<<true;
    else
        cout<<false;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}