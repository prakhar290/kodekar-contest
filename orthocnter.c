#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,x2,x3,y1,y2,y3,a,b,c,d,m1,m2,m3,e;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    
    a = (y3-y1)/(x3-x1);
    b = (y3-y2)/(x3-x2);
    e = (y2-y1)/(x2-x1);
    m1= -1/a;
    m2= -1/b;
    m3= -1/e;
    
    a*c= (-1)*d +((-1)*x2 + y2);
    b*c= (-1)*d +((-1)*x1 + y1);
    e*c= (-1)*d +((-1)*x3 + y3);
    
    c= (((-1)*x2 +y2)*(-1) - ((-1)*x1 +y1)*(-1))/(b*(-1) - a*(-1));
    d= (a*((-1)*x1 +y1) - b*((-1)*x2 +y2))/(b*(-1) - a*(-1));
    
    cout<<d<<" "<<c;
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}