You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array. Find the smallest number in the smallest positive number and largest positive number. Example: 1 2 3 4 5 Explanation: In the given array, Smallest positive number = 1 Largest positive number = 5 So, Smallest positive missing number = 6

Input Format

First line consists the size of an array. Second line consists the elements of an array.

Constraints

1 <= N <= 106 -106 <= arr[i] <= 106

Output Format

Output contain the smallest positive number missing from the array.

Sample Input 0

5
0 -10 1 3 -20
Sample Output 0

2
Explanation 0

Smallest positive missing number is 2.

Sample Input 1

8
-7 -1 0 2 3 5 4 -5
Sample Output 1

1
Explanation 1

Explanation: Smallest number = 0 Largest number = 5 Smallest positive missing number = 1




///Solution///



#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int n,i,j,ele,min=0;
    cin>>n;
    vector <int> vec1;
    for(i=0;i<n;i++)
    {
        cin>>ele;
        vec1.push_back(ele);
    }
    sort(vec1.begin(),vec1.end());
    vector <int> vec2;
      vector <int> vec3;
    for(i=0;i<n;i++)
    {
        if(vec1[i]>=0)
        vec3.push_back(vec1[i]);
    }
    int len=0;
    len = vec3.size();
    min = *min_element(vec3.begin(),vec3.end());
    for(j=min;j<=(min+n);j++)
      vec2.push_back(j);
    for(i=min;i<=(min+n);i++)
    {
        if(vec2[i]==vec3[i])
        continue;
        else if(vec2[i]!=vec3[i])
        {
            cout<<vec2[i];
        break;
        }
        else
        {
            cout<<(min+n+1);
            break;
        }
    }
    return 0;
}