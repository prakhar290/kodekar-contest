#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char str[1000],i,o,z,t,th,f,fi,s,se,e,n;
int count;
z=o=t=th=f=fi=s=se=e=n=0;
scanf("%s", str);

    count=0;
   for(int i=0;i<strlen(str);i++)
   {
    if(str[i]=='0')
    {z++;}
    if(str[i]=='1')
    {o++;}
    if(str[i]=='2')
    {t++;}
    if(str[i]=='3')
    {th++;}
    if(str[i]=='4')
    {f++;}
    if(str[i]=='5')
    {fi++;}
    if(str[i]=='6')
    {s++;}
    if(str[i]=='7')
    {se++;}
    if(str[i]=='8')
    {e++;}
    if(str[i]=='9')
    {n++;}
    
   }
printf("%d %d %d %d %d %d %d %d %d %d", z,o,t,th,f,fi,s,se,e,n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
