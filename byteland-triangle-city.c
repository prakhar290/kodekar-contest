Byteland is a small city somewhere beyond seven seas.

The people of Byteland love triangular shape because the shape of the city on map is in the form of a triangle.

One day, few thieves entered Byteland via some illegal connections.

Now the police of Byteland wants to catch them.

Police doesn't knows that thieves have captured one of the houses in Byteland or outside the Byteland.

Houses in Byteland lie exactly on an integer coordinate which lie inside and at the triangular boundary having coordinates A (x1, y1), B (x2, y2), C (x3, y3).

The Coordinate where the thieves hide is D(x4,y4).

The police is only capable to caught thieves inside the Byteland map and till boundary.

outside the boundary Police is not capable to find Thieves.

So you have to check whether police would "caught" or "not caught"

Input Format

First line of the input contains two Integers x1 and y1, representing the coordinates of point A. Second line of the input contains two Integers x2 and y2, representing the coordinates of point B. Third line of the input contains two Integers x3 and y3, representing the coordinates of point C. Fourth line of the input contains two Integers x4 and y4, representing the coordinates of point D

Constraints

-10^3 <= x1, x2, x3, x4, y1, y2, y3, y4 <= 10^3

Output Format

Single line output

Sample Input 0

0 4
4 0
0 0
1 3
Sample Output 0

caught
Explanation 0

The (1,3) coordinate is on the boundary and police caught thieves whether on boundary or inside boundaries.



//// solution////



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    int minx=0,maxx=0,miny=0,maxy=0;
    if(x1>x2 && x1>x3)
        maxx = x1;
    else if(x2>x1 && x2>x3)
        maxx = x2;
    else
        maxx = x3;
    if(x1<x2 && x1<x3)
        minx = x1;
    else if(x2<x1 && x2<x3)
        minx = x2;
    else
        minx = x3;
    if(y1>y2 && y1>y3)
        maxy = y1;
    else if(y2>y1 && y2>y3)
        maxy = y2;
    else
        maxy = y3;
    if(y1<y2 && y1<y3)
        miny = y1;
    else if(y2<y1 && y2<y3)
        miny = y2;
    else
        miny = y3;

    if((x4>minx && x4<maxx) && (y4>=miny && y4<maxy))
            cout<<"caught";
    else
            cout<<"not caught";
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
