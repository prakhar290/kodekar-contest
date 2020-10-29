An input string can be completed if additional letters can be added and no letters need to be taken away to match the word. Furthermore, the order of the letters in the input string must be the same as the order of letters in the final word.

Create a function that, given an input string, determines if the word can be completed.

("butl", "beautiful") ➞ true ("tulb", "beautiful") ➞ false

Input Format

First line consists a String

Second line consists a String

Constraints

1<=String length<=50

Both string will be lowercased.

Output Format

1 for true otherwise 0

Sample Input 0

butl
beautiful
Sample Output 0

1
Explanation 0

We can add "ea" between "b" and "u", and "ifu" between "t" and "l".

Sample Input 1

tulb
beautiful
Sample Output 1

0
Explanation 1

Although "t", "u", "l" and "b" all exist in "beautiful", they are incorrectly ordered.




///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    int result;

    cin>>a>>b;
    
    for(unsigned int i=0;i<a.size();i++){
        if(b.find(a[i])<b.find(a[i+1])){
            result = 1;
        }
        else{
            result = 0;
            break;
        }
    }
    cout<<result;
    return 0;
}
