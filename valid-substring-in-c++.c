Given a string S consisting only of opening and closing parenthesis 'ie '(' and ')', find out the length of the longest valid(well-formed) parentheses substring. NOTE: Length of smallest the valid substring ( ) is 2.

Input Format

Input consists string of parentheses.

Constraints

1 <= |S| <= 10^8

Output Format

Display the length of valid substring.

Sample Input 0

 "(()("
Sample Output 0

2
Explanation 0

The longest valid substring is "()". Length = 2.


///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,countr=0,countl=0,finnal=0,max=2;
    string s;
    cin>>s;
    int len = s.size();
    for (i=0;i<len;i++)
    {
        if(s[i]=='(')
        {
            countr++;
        }
        if(s[i]==')')
        {
            countl++;
        }
    }
    if(countr==countl)
    {
        finnal=countr+countl;
    }
    else{
        while(countr!=countl)
        {
            if(countr<countl)
            {
                countl--;
            }
        else 
            countr--;
      }
    }
    
    finnal = countr+countl;
    if(max<=finnal)
    {
        max=finnal;
        cout<<max;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
