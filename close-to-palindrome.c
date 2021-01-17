Find the closest palindrome number to the input number.

If input number is palindrome then print that number in output.

If two palindrome numbers tie in absolute distance, print the smaller number in output.

Input Format

Input consists an integer N.

Constraints

0<=N<=10000 0<=Palindrome Number<=9999

Output Format

Output consists a palindrome number which is closest to N.

Sample Input 0

121
Sample Output 0

121
Sample Input 1

100
Sample Output 1

99



///solution///




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string rev(int n){
        string str = to_string(n);
        reverse(str.begin(), str.end());
        return str;
    }

int main() {
    
    int n, countin=0, countde=0;
    bool flagin = false, flagde = false;
    string max_string, min_string, temp;
    
    cin>>n;
    int k = n;
    temp = rev(n);
    if(temp == to_string(n)){
        cout<<temp;
    }
    else{
        while(flagin!=true){
            n++;
            countin++;
            temp = rev(n);
            if(temp == to_string(n)){
                max_string = temp;
                flagin = true;
            }
        }
        n = k;
        while(flagde!=true){
            n--;
            countde++;
            temp = rev(n);
            if(temp == to_string(n)){
                min_string = temp;
                flagde = true;
            }
        }
        if(countin == countde){
            cout<<min_string;
        }
        else if(countin<countde){
            cout<<max_string;
        }
        else if(countin>countde){
            cout<<min_string;
        }
    }  
    
    return 0;
}
