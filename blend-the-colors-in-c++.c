Let suppose we have three colors Red,Blue and Green. We can create any color by mixing these three colors with different intensities of each in the order (Ri,Bi,Gi) where Ri,Bi,Gi denotes the intensities of the colors Red,Blue and Green respectively.

For example:- Color1(4,3,0) + Color2(3,1,5) = Possible Resultant Color with code (4,3,5),(4,1,5),(3,3,0),(3,1,5) and so on.

In this problem, Color codes of mixing colors are given and a resultant color is given. You have to determine that the resultant color code is possible by mixing those given color codes.

Input Format

The first line of input contains two space separated integers n and q.

The next n lines of input contains three space separated integers*Ri,Bi,Gi* denoting the respective intensities of red, blue and green color.

The next q lines of input contains three space separated integers Ri,Bi,Gi denoting the respective intensities of red, blue and green color resultant color.

Constraints

1<= n,q <=10^5

0<= Ri,Bi,Gi <= 10^5

Output Format

For each query print a single line containing "YES" if it is possible to obtain the given color, else print "NO".

Sample Input 0

2 2
0 5 6
1 4 9
1 5 9
2 4 9
Sample Output 0

YES
NO
Explanation 0

For the first query, we can mix both the given colors to get (1,5,9).

For the second query, there's no way to acheive the given color.




///sloution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n>>q;
    int a[n][3], b[q][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    int ranswer,banswer,ganswer;
    int k;
    for(int i=0;i<q;i++){
        ranswer=0;
        banswer=0;
        ganswer=0;
        for(int j=0;j<3;j++){
            k=0;
            while(k!=n){
                if(b[i][j]==a[k][j]){
                    if(j==0){
                        ranswer = 1;
                        break;
                    }
                    else if(j==1){
                        banswer=1;
                        break;
                    }
                    else if(j==2){
                        ganswer=1;
                        break;
                    }
                }
                k++;
            }
            if(j==2){
                if(ranswer==1&&banswer==1&&ganswer==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
