A company has decided to promote interactions between connections in various apartments. They have created a number of nodes which are to be connected to form a cluster to find the above information. The nodes are described by a 2D grid of 0's and 1's with n rows and m columns, a cell containing a zero denotes not working, while a cell containing a one is a cell that denotes a working node. i.e.

(1 and 0), (0 and1) and(0 and 0) have no connections. but (1 and 1) have connection.

Input Format

-The first line contains an integer, n, denoting the number of rows in gridofNodes

-The next line contains an integer, m, denoting the number of columns in gridOfNodes

-Grid values containing only 1's and 0's

Constraints

0 < n,m <= 10

Output Format

Single line integer output denoting number of connections

Sample Input 0

3
7
1011110
0110101
1000001
Sample Output 0

28
Explanation 0

5 nodes in the first row get connected with 4 nodes in the second row, 20 connections. Then 4 nodes in the second row get connected with 2 nodes in the third row, 8 connections 20+8 = 28 connections in total.




////solution////




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int count,count1,ans=0;
    for(int i=0;i<n-1;i++){
        count=0;
        count1=0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'){
                count++;
            }
        }
        i++;
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'){
                count1++;
            }        
        }
        i--;
        ans+=count*count1;
    }
    cout<<ans;
    return 0;
}
