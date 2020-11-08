Can you find the number of word consists in a given String. If yes, then write the code.

Input Format

input consists a string

Constraints

1<=string length<=1000

Output Format

output consists an integer value

Sample Input 0

KIET Group of Institutions
Sample Output 0

4



///solution///


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    int count =0;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' ')
            count++;
    }
    if(str[str.size() - 1] == ' ')
        count--;
    cout<<count+1;
    return 0;
}
