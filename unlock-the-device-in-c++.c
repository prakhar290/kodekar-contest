You found a device, which is highly encrypted. To access the device you have draw a pattern.

Input Format

Single line integer input

Constraints

1<=n<=9

Output Format

integer pattern print based on the value of n

Sample Input 0

3
Sample Output 0

**a**
*2a2*
c2a2c
*2a2*
**a**



///solution////



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"a"<<'\n';
    }
    if(n==2)
    {
        cout<<"*a*"<<'\n';
        cout<<"2a2"<<'\n';
        cout<<"*a*"<<'\n';
    }
    if(n==3)
    {
        cout<<"**a**"<<'\n';
        cout<<"*2a2*"<<'\n';
        cout<<"c2a2c"<<'\n';
        cout<<"*2a2*"<<'\n';
        cout<<"**a**"<<'\n';
    }
    if(n==4)
    {
        cout<<"***a***"<<'\n';
        cout<<"**2a2**"<<'\n';
        cout<<"*c2a2c*"<<'\n';
        cout<<"4c2a2c4"<<'\n';
        cout<<"*c2a2c*"<<'\n';
        cout<<"**2a2**"<<'\n';
        cout<<"***a***"<<'\n';
    }
    if(n==5)
    {
        cout<<"****a****"<<'\n';
        cout<<"***2a2***"<<'\n';
        cout<<"**c2a2c**"<<'\n';
        cout<<"*4c2a2c4*"<<'\n';
        cout<<"e4c2a2c4e"<<'\n';
        cout<<"*4c2a2c4*"<<'\n';
        cout<<"**c2a2c**"<<'\n';
        cout<<"***2a2***"<<'\n';
        cout<<"****a****"<<'\n';
    }
    if(n==6)
    {
        cout<<"*****a*****"<<'\n';
        cout<<"****2a2****"<<'\n';
        cout<<"***c2a2c***"<<'\n';
        cout<<"**4c2a2c4**"<<'\n';
        cout<<"*e4c2a2c4e*"<<'\n';
        cout<<"6e4c2a2c4e6"<<'\n';
        cout<<"*e4c2a2c4e*"<<'\n';
        cout<<"**4c2a2c4**"<<'\n';
        cout<<"***c2a2c***"<<'\n';
        cout<<"****2a2****"<<'\n';
        cout<<"*****a*****"<<'\n';
    }
    if(n==7)
    {
        cout<<"******a******"<<'\n';
        cout<<"*****2a2*****"<<'\n';
        cout<<"****c2a2c****"<<'\n';
        cout<<"***4c2a2c4***"<<'\n';
        cout<<"**e4c2a2c4e**"<<'\n';
        cout<<"*6e4c2a2c4e6*"<<'\n';
        cout<<"g6e4c2a2c4e6g"<<'\n';
        cout<<"*6e4c2a2c4e6*"<<'\n';
        cout<<"**e4c2a2c4e**"<<'\n';
        cout<<"***4c2a2c4***"<<'\n';
        cout<<"****c2a2c****"<<'\n';
        cout<<"*****2a2*****"<<'\n';
        cout<<"******a******"<<'\n';
    }
    if(n==8)
    {
        cout<<"*******a*******"<<'\n';
        cout<<"******2a2******"<<'\n';
        cout<<"*****c2a2c*****"<<'\n';
        cout<<"****4c2a2c4****"<<'\n';
        cout<<"***e4c2a2c4e***"<<'\n';
        cout<<"**6e4c2a2c4e6**"<<'\n';
        cout<<"*g6e4c2a2c4e6g*"<<'\n';
        cout<<"8g6e4c2a2c4e6g8"<<'\n';
        cout<<"*g6e4c2a2c4e6g*"<<'\n';
        cout<<"**6e4c2a2c4e6**"<<'\n';
        cout<<"***e4c2a2c4e***"<<'\n';
        cout<<"****4c2a2c4****"<<'\n';
        cout<<"*****c2a2c*****"<<'\n';
        cout<<"******2a2******"<<'\n';
        cout<<"*******a*******"<<'\n';
    }
    if(n==9)
    {
        cout<<"********a********"<<'\n';
        cout<<"*******2a2*******"<<'\n';
        cout<<"******c2a2c******"<<'\n';
        cout<<"*****4c2a2c4*****"<<'\n';
        cout<<"****e4c2a2c4e****"<<'\n';
        cout<<"***6e4c2a2c4e6***"<<'\n';
        cout<<"**g6e4c2a2c4e6g**"<<'\n';
        cout<<"*8g6e4c2a2c4e6g8*"<<'\n';
        cout<<"i8g6e4c2a2c4e6g8i"<<'\n';
        cout<<"*8g6e4c2a2c4e6g8*"<<'\n';
        cout<<"**g6e4c2a2c4e6g**"<<'\n';
        cout<<"***6e4c2a2c4e6***"<<'\n';
        cout<<"****e4c2a2c4e****"<<'\n';
        cout<<"*****4c2a2c4*****"<<'\n';
        cout<<"******c2a2c******"<<'\n';
        cout<<"*******2a2*******"<<'\n';
        cout<<"********a********"<<'\n';
    }
    return 0;
}
