Tony has N friends . They are invited to his birthday party . Each friend has satisfying factor which is equal to the number of gifts which they are expecting . Tony wants to satisfy at - least K friends but he is unaware of their satisfying factors . So Tony starts distributing the gifts . As soon as friend is satisfied , he won't take more gifts . 

Tony will follow distribution strategy so as to minimize the number of gifts needed to satisfy at least K ofhis friends . Find the minimum number of gifts which Tony should carry with himself in the best case .

Input Format

First line contains an integer T ( the number of test cases ) . Then first line of each test case contains an integer N : number of friends . Then N space separated integers follow which are the satisfying factors . Last line of each test case consists of an integer K , where k is the number of friends to be satisfied .

Constraints

1 <= T <= 10  1 <= N ,  Satisfying factor <= 100000  1 <= K <= N

Output Format

For each test case print in new line the minimum number of gifts that Tony should carry.

Sample Input 0

2
2
5 11
1
3
5 77 2
2
Sample Output 0

5
7





///Solution///



#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int n,sum=0,i,t,s;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int a;
    vector <int> vec;
    vector <int> b;
    for(i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    cin>>s;
    sort(vec.begin(),vec.end());
    for(i=0;i<s;i++)
    {
        sum = sum + vec[i];
    }
    cout<<sum<<"\n";
    sum=0;
    t--;
    }
    return 0;
}