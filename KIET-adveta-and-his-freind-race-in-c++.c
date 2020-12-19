Adveta walks 100 steps first day and she walks 10 more steps then the previous day for the next each day. While Rahul walks 120 steps first day and He walks 5 more steps then the previous day for the next each day. And Jaanki walks 80 steps first day and she walks 20 more steps then the previous day for the next each day. If their trainer assigned same number of days to walk. Then calculate total number of steps they walked in the given days.

Input Format

An integer input to show number of days.

Constraints

1<= Days <=10

Output Format

Three lines of output

First line shows total number of steps walked by Adveta.

Second line shows total number of steps walked by Rahul.

Thirs line shows total number of steps walked by Jaanki.

Sample Input 0

2
Sample Output 0

210
245
180
Explanation 0

For Adveta, first day 100 steps + second day 110 steps = 210 steps.

For Rahul, first day 120 steps + second day 125 steps = 245 steps.

For Jaanki, first day 80 steps + second day 100 steps = 180 steps.



////Solution////



#include <iostream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    int t1=100, t2=120, t3=80, ts1=100, ts2=120, ts3=80; 
    for(int i=2;i<=d;i++){
        ts1 = ts1+t1+10*(i-1);
        ts2 = ts2+t2+5*(i-1);
        ts3 = ts3+t3+20*(i-1);
    }
    
    cout<<ts1<<endl<<ts2<<endl<<ts3;

    return 0;
}
