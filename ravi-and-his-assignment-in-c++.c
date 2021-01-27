Ravi is a student and he recieved assignment from his teacher of a numerical subject.

Ravi have to upload assignment today.

This assignment includes some scientific calculation.

But, eventually Ravi breaks his Scientific Calculator.

He can't buy another right now because of Covid-19 lockdown.

Ravi decided, to calculate the scientific values from his calculator app.

But the calculator app is not working properly, may be it crashes.

Now Ravi stuck into the problem.

So as a friend of Ravi, create a code to provide scientific calculation.

NOTE:- Do not use any predefined math function. Use of predefined function reduces your score, for e.g. use of sqrt() function is not acceptable for getting square root you have to create your own logic to find.

Input Format

The first line accepts the choice from 1 to 5.

second line accepts either one or two integers depending upon choice.

1.Square Root -> access one numbers, and print square root of that number

2.Power of ->access two integers i.e., x and y. output woul be x^y.

3.Factorial ->access one integer and prints factorial of a number.

4.Power of 2 ->access one integer i.e., x,output would be 2^x.

5.Log ->access two integers x and y, output would be log of x on base y.

Constraints

1 >= choice <= 5

Output Format

output may be of single approximate value

Sample Input 0

2
5 3
Sample Output 0

125




/// solution///



#include<bits/stdc++.h>
using namespace std;


double Square(double n, double i, double j) 
{ 
    double mid = (i + j) / 2; 
    double mul = mid * mid;
    if ((mul == n) || (abs(mul - n) < 0.00001)) 
        return mid;
    else if (mul < n) 
        return Square(n, mid, j);
    else
        return Square(n, i, mid); 
}
void findSqrt(double n) 
{ 
    double i = 1;
    bool found = false; 
    while (!found) {
        if (i * i == n) { 
            cout << fixed << setprecision(0) << i; 
            found = true; 
        } 
        else if (i * i > n) {
            double res = Square(n, i - 1, i); 
            cout << fixed << setprecision(5) << res; 
            found = true; 
        } 
        i++; 
    } 
} 


int Logn(int n, int r) 
{ 
    return (n > r - 1) ? 1 + Logn(n / r, r) : 0; 
}


int main()
{
    int c;
    cin>>c;
    int ans = 1, n, x, y;
    switch(c)
    {
        case 1:
        double num;
        cin>>num;
        findSqrt(num);
        break;
        case 2:
        cin>>x>>y;
        for (int i = 1; i <= y; i++)
        {
            ans = ans * x;
        }
        cout<<ans;
        break;
        case 3:
        cin>>x;
        for (int i = 1; i <= x; i++)
        {
            ans = ans * i;
        }
        cout<<ans;
        break;
        case 4:
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            ans = ans * 2;
        }
        cout<<ans;
        break;
        case 5:
        cin>>x>>y;
        ans = Logn(x,y);
        cout<<ans;
        break;
        default:
        break;
    }
    return 0;
}