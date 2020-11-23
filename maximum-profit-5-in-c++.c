#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

Input Format

First line consists size of an array. Second line consists the element of an array.

Constraints

0 < N <= 10^6

Output Format

Output contain maximum profit.

Sample Input 0

6
7 1 5 3 6 4
Sample Output 0

5
Explanation 0

Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Not 7-1 = 6, as selling price needs to be larger than buying price.



///solution///


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, bp = 0, sp = 0, maxpro = 0, pro;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                bp = a[i];
                sp = a[j];
                pro = sp - bp;
                if(pro>maxpro){
                    maxpro = pro;
                }
            }
        }
    }
    
    cout<<maxpro;
    return 0;
}