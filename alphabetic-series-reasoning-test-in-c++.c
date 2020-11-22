Hari got stuck in a letter reasoning test. Help him out to solve the problem. The series consists only letter abc in same albhabetical order each time. You can only use only letters a,b,c any number of times to complete the series. You have to find the missing letters to complete the series and print the missing letters only.

The length of the series will be based on the users input N.

Ex:- Suppose user enters the value of N is 1

then, complete series will be "abc"

Now,suppose user enters the value of N is 2

then, complete series will be "abcaabbcc"

Now,suppose user enters the value of N is 3

then, complete series will be "abcaabbccaaabbbccc"

Input Format

First line will define the length of series i.e. value of N.

Second line will contain the incomplete series.

Constraints

Size of N

0

Output Format

Output will contain only the missing letters from the series.

Sample Input 0

3
abcaabbcaabbbccc
Sample Output 0

ca



///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string mul(char a, int n){
    string s("");
    for(int i=0;i<n;i++)
        s+=a;
    return s;    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    string s1,s2("");
    cin>>n;
    cin>>s1;
    for(int i=1;i<=n;i++){
        s2+=mul('a',i)+mul('b',i)+mul('c',i);
    }
    int l = s2.size() - s1.size();
    while(l!=0){
        for(int i=0,j=0;s2[i]!='\0';i++){
            if(s2[i]==s1[j]){
                j++;
            }
            else{
                cout<<s2[i];
                l--;
            }
        }
    }
    return 0;
}
