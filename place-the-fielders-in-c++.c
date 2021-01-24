Virat Kholi is trying to place the fielders at the right place in the field. According to his coach if he places the fielders at the orthocenter of the plain then it will be best position for the fielders.

He has given coordinates for the three points on the field. You have to help him find the perfect point for the fielder.

Input Format

First line of the input contains two Integers x1 and y1, representing the coordinates of point A. Second line of the input contains two Integers x2 and y2, representing the coordinates of point B. Third line of the input contains two Integers x3 and y3, representing the coordinates of point C.

Constraints

-10^3 <= x1, x2, x3, y1, y2, y3 <= 10^3

Output Format

coordinates of the point where fielder is to be placed

Sample Input 0

3 1
0 4
-3 1
Sample Output 0

0 4



///solution///

(half test case solution)

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
    double x1,x2,x3,y1,y2,y3,x4,y4;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;

    x4 = ( (x2*(x1-x3)+y2*(y1-y3)) * (y3-y2) - (y3-y1) * (x1*(x2-x3)+y1*(y2-y3)) ) / ( (x3-x2)*(y3-y1) - (y3-y2)*(x3-x1) );
    y4 = ( (x2*(x1-x3)+y2*(y1-y3)) * (x3-x2) - (x3-x1) * (x1*(x2-x3)+y1*(y2-y3)) ) / ( (y3-y2)*(x3-x1) - (y3-y1)*(x3-x2) );

    cout<<x4<<' '<<y4;
    return 0; 
} 
