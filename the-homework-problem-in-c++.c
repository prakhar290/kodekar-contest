Vivek is assigned a task today by Sumeet Sir. He is given an array A containing N integers. His task is to change all elements of array to some minimum value 'x', that is, A[i]=x ; for all 1 ≤ i≤ N such that product of all elements of this new array is strictly greater than the product of all elements of the initial array.

Note that the value of 'x' should be as minimum as possible.

Input Format

The first line consists of an integer N, denoting the number of elements in the array. The next line consists of N space separated integers, denoting the array elements.

Constraints

1 <= N <= 10^5 1 <= A[i] <= 10^5

Output Format

Print the value of 'x'.

Sample Input 0

5
4 2 1 10 6
Sample Output 0

4
Explanation 0

Initial array product =4∗2∗1∗10∗6=480

If all elements become 4, then product =4∗4∗4∗4∗4=1024. Had all elements become 3, product would be =243 which is less than 480. Hence, value of x is 4.



///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long t;
    cin>>n;
    int a[n],p=1,x=1,i;
    for(i=0;i<n;i++)
    {cin>>a[i];
      p=p*a[i];}
    x=1;
    while(1){
        t=pow(x,n);
        if(t>p){
            cout<<x; break;
        }
        x++;
    }
    return 0;
}