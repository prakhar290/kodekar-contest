First take the input as size of matrix. And take input the element in matrix and the value of K and find the kth smallest element in the matrix.

Input Format

First line consists of size of matrix. Second line consists the element in matrix. Third line consists the value of k.

Constraints

1 <= N <= 50 1 <= mat[][] <= 10000 1 <= K <= N*N

Output Format

Output contain single element.

Sample Input 0

4
16 28 60 64 22 41 63 91 27 50 87 93 36 78 87 94
3
Sample Output 0

27
Explanation 0

27 is the 3rd smallest element.

Sample Input 1

4
10 20 30 40 15 25 35 45 24 29 37 48 32 33  39 50
7
Sample Output 1

30
Explanation 1

30 is the 7th smallest element.



////solution////



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,n,k,a;
    cin>>n;
    vector <int> vec;
    for(i=0;i<n*n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    cin>>k;
    cout<<vec[k-1];
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
