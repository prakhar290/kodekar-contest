There are two N size arrays A and B containing numbers. The third line will contain the numbers of second array B.

Rules:-

(i) If a two digit odd number at some index in first array is followed by a two digit even number at the same index in second array then they are to be added and print it.

(ii) If a two digit even number at some index in first array is followed by a two digit odd number at the same index in second array then they are to be subtracted and print it.

(iii) If an even number at some index in first array is followed by an even number at the same index in second array then they are to be multiplied and print it.

(iv) If an odd number at some index in first array is followed by an odd number at the same index in second array then they are to be multiplied and print it.

(v) If no operations done between numbers then print 0.

Input Format

First line will contain the size N of two arrays.

Second line will contain the numbers of first array A.

Third line will contain the numbers of second array B.

Constraints

Size of N

0

Output Format

Print only the resultant Numbers.

Sample Input 0

5
24 21 23 235 26
23 24 123 258 96
Sample Output 0

1
45
2829
0
2496



////solution////




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int result(int,int);

int main() {
    int n;
cin>>n;
int a[n], b[n];

for(int i=0;i<n; i++)
    cin>>a[i];
for(int i=0; i<n; i++)
    cin>>b[i];
    
for(int i=0;i<n;i++){
    cout<<result(a[i], b[i])<<endl;
}    
    return 0;
}

int result(int a , int b){
    
    if(a<100 && b<100&&a!=0&&b!=0){
        if(a%2!=0&&b%2==0){
            return a+b;
        }
        else if(a%2==0&&b%2!=0){
            return a-b;
        }
        else if(a%2==0&&b%2==0){
            return a*b;
        }
        else if(a%2!=0&&b%2!=0){
            return a*b;
        }

    }
    else if(a%2==0&&b%2==0&&a!=0){
        return a*b;
    }
    else if(a%2!=0&&b%2!=0&&b!=0){
        return a*b;
    }
    return 0;
    
}