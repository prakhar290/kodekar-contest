Madhukar is spending money from his collection each day he spend 20 rupees on fast food. after n no of days how much total money has he in his collection?Initially he has 37000 rs.

Input Format

one integer input which will denote total number of days

Constraints

Constraint maximum this fast food eating will done for 30 days

Output Format

output will have two lines, first line will display list of his money remaining on daily basis. second line will display total sum of money in his collection.

Sample Input 0

4
Sample Output 0

36980 36960 36940 36920
36920
Explanation 0

first line is the initial input. first line of output is collection after spending money day by day. second line of output is remaining collection.



////Solution////



#include <iostream>

using namespace std;

int main()
{
    int d;
    cin>>d;
    
    for(int i=1;i<=d;i++){
        cout<<37000-20*i<<" ";
        if(i==d)
            cout<<endl<<37000-20*d;
    }

    return 0;
}
