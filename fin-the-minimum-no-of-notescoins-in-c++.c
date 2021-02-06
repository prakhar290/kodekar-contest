XYZ is a currency chest bank. tha bank has sufficient notes of different denomination at different time. possible denominations are

The different denomanination notes can be in bank as per availibility =

2000

500

200

100

50

20

10

5

2

1

A branch of a bank demands for X amount.Then XYZ bank issue minimum number of notes as per availabilty of denominations

Input Format

Three line input First line input is integer which shows X amounnt second line input is integer which contains (N) different denominatios are available third line input is an array which will contain N denominations in random order from possible denominations

Constraints

1<= X <=10^5 1<= N <=10

Output Format

Single line integer output

Sample Input 0

5431
5
1 5 100 500 2000
Sample Output 0

15
Explanation 0

X=5431 amount is asking by branch bank N=5 currenly avaible denominatios are available in XYZ currency chest output will be (2000*2 + 500*2 + 100*4 + 5*6 + 1*1) 15 numbers of notes are required




///solution///



#include<bits/stdc++.h>
using namespace std;
/*
int minCoins(int coins[], int m, int V)
{
if (V == 0) return 0;

int res = INT_MAX;
for (int i=0; i<m; i++)
{
    if (coins[i] <= V)
    {
        int sub_res = minCoins(coins, m, V-coins[i]);
        if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
    }
}
return res;
}
*/
int minCoins(int coins[], int m, int V)
{
    
    int table[V+1];
 
   
    table[0] = 0;
 
   
    for (int i=1; i<=V; i++)
        table[i] = INT_MAX;
 
  
    for (int i=1; i<=V; i++)
    {
       
        for (int j=0; j<m; j++)
          if (coins[j] <= i)
          {
              int sub_res = table[i-coins[j]];
              if (sub_res != INT_MAX && sub_res + 1 < table[i])
                  table[i] = sub_res + 1;
          }
    }
    return table[V];
}
int main()
{
    int amt;
    cin>>amt;
    int n;
    cin>>n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<minCoins(a, n, amt);
    return 0;
}