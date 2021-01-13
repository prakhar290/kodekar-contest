A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Check whether a given integer is a Boston number, output should be boolean.

Output Format

1 if the number is a Boston number. 0 if the number is a not Boston number.

Sample Input

378

Sample Output

1

Input Format

integer N

Constraints

1<=N<=10000

Output Format

1 if no. is boston otherwise 0



////solution////



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
            int n,i,j,t,p;
            cin>>n;
            t = 0;
            p = 0;
            i = n;
            while(i>0)
            {
                        t = t + (i%10);
                        i = i/10;
            }
            //cout<<t<<endl;
            for(i=2;i<=n;i++)
            {
                        if(n%i == 0)
                        {
                                    if(i>9)
                                    {
                                                j = i;
                                                while(j>0)
                                                {
                                                            p = p + j%10;
                                                            j = j/10;
                                                }
                                    }
                                    else
                                    {
                                                p = p + i;         
                                    }
                                    n = n/i;
                                    i--;
                        }
            }
            //cout<<p<<endl;
            if(p==t)
            {
                        cout<<"1"<<endl;
            }
            else
            {
                        cout<<"0"<<endl;
            }
    return 0;
}
