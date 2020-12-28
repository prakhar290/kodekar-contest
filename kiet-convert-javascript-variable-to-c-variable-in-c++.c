Mr. RAM developed a logic in JavaScript but client requested him to channge his logic in C++, so he decided to write a logic to Convert a JavaScript variable into C++ variable as per specified condition(s),

C++ variables allow underscore whereas Javascript variables do not allow underscore. if a variable in Javascript is defined as- myJavascriptVariable convert into C++ (insert _ before any capital letter and convert the capital letter into small letter) my_javascript_variable

Input Format

one line which takes input from user as javascript variable and convert it into C++ variable as specified.

Constraints

User must enter a variable which contains a capital letter in it.

Output Format

Add underscore before capital letter (JavaScript variable) and all letters in variable name must be in small letters.

Sample Input 0

myJavascriptVariable
Sample Output 0

my_javascript_variable
Explanation 0

There are two capital letters so, underscore is added before both and capital letters are converted to small




/// Solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str,str2;
    int len;
    cin>>str;
    len = str.length();
    for(int i=0;i<len;i++)
    {
        if(!isupper(str[i]))
        {
            str2 = str2 + str[i];
        }
        else
        { str[i] = str[i] + 32;
        str2 = str2 + '_' + str[i]; }
    }
    
    cout<<str2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}