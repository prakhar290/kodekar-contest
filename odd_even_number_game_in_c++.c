


///solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int result(int,int);

int main() {
    int n;
cin>>n;
int a[n], b[n];

for(int i=0;i<n; i++)
    cin>>a[i];
for(int i=0; i<n; i++)
    cin>>b[i];
    
for(int i=0;i<n;i++){
    cout<<result(a[i], b[i])<<endl;
}    
    return 0;
}

int result(int a , int b){
    
    if(a<100 && b<100&&a!=0&&b!=0){
        if(a%2!=0&&b%2==0){
            return a+b;
        }
        else if(a%2==0&&b%2!=0){
            return a-b;
        }
        else if(a%2==0&&b%2==0){
            return a*b;
        }
        else if(a%2!=0&&b%2!=0){
            return a*b;
        }

    }
    else if(a%2==0&&b%2==0&&a!=0){
        return a*b;
    }
    else if(a%2!=0&&b%2!=0&&b!=0){
        return a*b;
    }
    return 0;
    
}