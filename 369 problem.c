A number is said to be a 369 number if

The count of 3s is equal to count of 6s and the count of 6s is equal to count of 9s. The count of 3s is at least 1. For Example 12369, 383676989, 396 all are 369 numbers whereas 213, 342143, 111 are not.

Given A and B find how many 369 numbers are there in the interval [A, B]

Input Format

line containing 2 integers A and B

Constraints

1<=A<=B<=10^5

Output Format

the number of 369 numbers between A and B inclusive

Sample Input 0

360 400
Sample Output 0

2
Explanation 0

only 369 and 396 follow the rule from 360 to 400. So, count would be 2



///solution///


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int a,b;
    unsigned int three, six, nine, i, count = 0;
    
    cin>>a>>b;
    while(a<=b){
        i = a;
        three = 0;
        six = 0;
        nine = 0;
        string str = to_string(i);
        
        for(unsigned int j=0; str[j]!='\0'; j++){
            if(str[j]=='3'){
                three++;
            }
            else if(str[j] == '6'){
                six++;
            }
            else if(str[j] == '9'){
                nine++;
            }
        }
        
        if(three!=0&&three==six&&six==nine){
            count++;
        }
        a++;
    }
    cout<<count;
    return 0;
}
