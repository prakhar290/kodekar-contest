Suppose Military gets a series of charachters and wants to count the number of charachters in that string in sorted manner with their occurence count

Input Format

Oneline input is expected as a random series of alphabets without space.

Constraints

A collection of alphabets without space

Output Format

Alphabet with it's occurence count

Sample Input 0

bbabbcbd
Sample Output 0

a1b5c1d1
Explanation 0

Alphabatically sorted character and it's occurence for eg. a1 and b5 etc.



///Solution////



#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        if(!count(v.begin(), v.end(), s[i]))
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        int c = 0;
        for(int j=0;j<s.size();j++){
            if(v[i]==s[j]){
                c++;
            }
        }
        cout<<v[i]<<c;
    }

    return 0;
}