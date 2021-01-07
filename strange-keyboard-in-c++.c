You have bought a new strange keyboard. You have to write an email to your college with that keyboard. While typing sometimes the Home key, Backspace key or End key gets accidentally pressed. Home key is represented by '<' , End key is represented by '>' , Backspace key is represented by '*'.

Given the text you wrote, print the text your college will receive.

Note:- The Home key changes the writing cursor's position to the beginning of the line, which means whatever after '<' goes before what is already written.

The End key changes the writing cursor's position to the end of the line, which means whatever after '>' goes after what is already written.

The Backspace key '*' removes the previous character to the current position. And if there is nothing written, nothing happens.

Input Format

The only line of input consists of a string S, denotes the text contained in the email.

Constraints

1<= S <=10^6

String contains letters, digits, and three special characters

Home key represented by '<'
End key represented by '>'
Backspace key represented by '*'
Output Format

Print the text which your college will receive.

Sample Input 0

HE*<LL>O
Sample Output 0

LLHO




///Solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int len;
    len = s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='<')
            s[0]=s[i+1];
        else if(s[i]=='>')
            s[len-1]=s[i+1];
        else if(s[i]=='*')
            s[i-1]=s[i+1];
        else
            continue;
    }
    cout<<s;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
