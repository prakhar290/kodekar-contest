Let suppose N cars are parked on a circular track**(1 to N)** at distance of 1km each. Each car contains some fuels (Fi to Fn).A car runs 2km per litre of fuel. You are driving car 1 in the clockwise direction. To move one unit of distance in this direction, you need to spend half litre of gasoline. When you pass another car parked at even position (even if you'd run out of gasoline exactly at that point), you steal all its gasoline and When you pass another car parked at odd position,you steal half of its gasoline each time. Once you do not have any gasoline left, you stop.

Here is one catch that you will not steal gasoline from other cars if that car has less then 2 litres of gasoline.

What is the total clockwise distance travelled by your car?

Input Format

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N.

The second line contains N space-separated integers f1,f2,…,fN.

Constraints

1≤ T ≤100

1≤ N ≤100

0≤ fi ≤100

Output Format

Total distance traveled for each test cases into seperated line.

Sample Input 0

2
5
1 2 3 4 5
6
2 5 2 0 1 0
Sample Output 0

 24.5
 16



///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        float a[n];
        for(int i=1;i<=5;i++){
            cin>>a[i];
        }
        int i=2;
        float f = a[1],d=0;
        a[1]=0;
        while(true){
            if(i%2==0&&a[i]>=2&&f>=0.5){
                f+=a[i];
                a[i]=0;
                d++;
                f-=0.5;
            }
            else if(i%2==1&&a[i]>=2&&f>=0.5){
                f+=a[i]/2.0;
                d++;
                f-=0.5;
                a[i]/=2.0;
            }
            else{
                if(f>=0.5){
                    d++;
                    f-=0.5;
                }
                else if(f<0.5){
                    d+=2.0*f;
                    f=0;
                }
            }
            if(f<=0){
                break;
            }
            else if(i==n){
                i=0;
            }
            i++;
        }
        cout<<" "<<d<<endl;
    }
    return 0;
}
