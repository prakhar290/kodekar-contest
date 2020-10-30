Write a program that takes a string and returns the number of alphanumeric characters that occur more than once.

Examples duplicateCount("abcde") ➞ 0

duplicateCount("aabbcde") ➞ 2

duplicateCount("Aa") ➞ 0

Input Format

input consists a String.

Constraints

Duplicate characters are case sensitive.

The input string will contain only alphanumeric characters.

Output Format

output consists an integer

Sample Input 0

abcde
Sample Output 0

0
Sample Input 1

aabbcde
Sample Output 1

2


///solution///

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     string str;
    int len=0,count=0;
    cin>>str;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if(!isalnum(str[i]))
        {
            break;
        }
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(str[i]==str[i+1])
            continue;
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}