You have bought some chocolates of cost N and find the number of ways to make change for N rupees, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.

Input Format

First line contains the two Integer Value N and M. N denotes total cost and M denotes types of coins.

Second line Contains different coin values in an array S[].

Constraints

1<= N,M <=10^3

Output Format

Only print total ways to pay the total cost.

Sample Input 0

4 3
1 2 3
Sample Output 0

4
Explanation 0

Input:

N = 4 , M = 3

S[] = {1,2,3}

Output: 4

Explanation: Four Possible ways are:

{1,1,1,1},{1,1,2},{2,2},{1,3}.

Sample Input 1

10 4
2 5 3 6
Sample Output 1

5
Explanation 1

Input:

N = 10 , M = 4

S[] ={2,5,3,6}

Output: 5

Explanation: Five Possible ways are:

{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}.



///solution///



#include<bits/stdc++.h>
using namespace std;

int count(vector<int> s, int m, int n)
{
    if(n == 0)
        return 1;
    if(n < 0)
        return 0;
    if(m <= 0 && n>=1)
        return 0;
    return count(s,m-1,n) + count(s,m,n-s[m-1]);
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> s(m);
    for(int i = 0; i < m; i++)
        cin>>s[i];

    int ans = count(s,m,n);
    cout<<ans;
    return 0;
}
