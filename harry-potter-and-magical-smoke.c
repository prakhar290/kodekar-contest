Harry Potter has n mixtures in front of him, arranged in a row. Each mixture has one of 100 different colors (colors have numbers from 0 to 99).

He wants to mix all these mixtures together. At each step, he is going to take two mixtures that stand next to each other and mix them together, and put the resulting mixture in their place.

When mixing two mixtures of colors a and b, the resulting mixture will have the color (a+b) mod 100.

Also, there will be some smoke in the process. The amount of smoke generated when mixing two mixtures of colors a and b is a*b.

Find out what is the minimum amount of smoke that Harry can get when mixing all the mixtures together.

Input Format

The first line of each input file will contain n, the number of mixtures. The second line will contain n integers between 0 and 99 - the initial colors of the mixtures.

Constraints

1 <= n <= 100

Output Format

Output the minimum amount of smoke.

Sample Input 0

3
40 60 20
Sample Output 0

2400
Explanation 0

There are two possibilities:

first mix 40 and 60 (smoke: 2400), getting 0, then mix 0 and 20 (smoke: 0); total amount of smoke is 2400.

.first mix 60 and 20 (smoke: 1200), getting 80, then mix 40 and 80 (smoke: 3200),total amount of smoke is 4400.

The first scenario is a much better way to proceed.




////solution////

////1. python solution////

from itertools import permutations

def calcSmoke(l,n):
    smoke=0
    for i in range(0,n-1):
        a = l[i]
        b = l[i+1]
        l[i+1] = (a+b)%100
        smoke+=a*b
    return smoke    

n = int(input())
l = list(map(int, input().split()))
perm = permutations(l)  
shortSmoke = 10000000 
for i in list(list(perm)):  
    smoke = calcSmoke(list(i),n)
    if(smoke<shortSmoke):
        shortSmoke = smoke

print(shortSmoke)        



/// 2. c++ half test case solution////


#include <iostream>
#include<vector>

using namespace std;
long long calcSmoke(vector<long long> v, long long n){
    long long smoke = 0,a,b;
    for(int i=0;i<n-1;i++){
        a = v[i];
        b=v[i+1];
        v[i+1]=(a+b)%100;
        smoke+=(a*b);
    }
    return smoke;
}

int main()
{
    long long n, shortSmoke=100000;
    cin>>n;
    vector<long long> v,v2;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    v2 = v;
    long long smoke=calcSmoke(v2,n);
    if(smoke<shortSmoke){
        shortSmoke=smoke;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                long long temp = v2[i];
                v2[i] = v2[j];
                v2[j] = temp;
            }
            smoke = calcSmoke(v2, n);
            if(smoke<shortSmoke){
                shortSmoke=smoke;
            }
            //v2=v;
        }
    }
    cout<<shortSmoke;
    return 0;
}
