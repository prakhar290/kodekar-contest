Some members of KIET MCA department went to the Pizza Shop after seminar. They ordered P number of pizzas. The stall has L cooks and each cook has a rank R. A cook with a rank R can cook 1 pizza in the first R minutes 1 more pizza in the next 2R minutes, 1 more pizza in 3R minutes and so on(he can only cook a complete pizza) ( For example if a cook is ranked 2.. he will cook one pizza in 2 minutes one more pizza in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pizzas, in 13 minutes also he can cook only 3 pizzas as he does not have enough time for the 4th pizza). Calculate the minimum time needed to cook all the pizzas.

Input Format

First line contains P, the number of pizza ordered. In the next line the first integer denotes the number of cooks L and L integers follow in the Next line each denoting the rank of a cook.

Constraints

P <= 1000 L <= 50 1 <= R <= 8

Output Format

Print an integer which tells the number of minutes needed to get the order done.

Sample Input 0

10
4
1 2 3 4
Sample Output 0

12




///solution///



#include<bits/stdc++.h>
using namespace std;

int calcTime(int p, vector<int> v, int l){
    int t=0,pCount=0;
    int a[l],b[l];
    for(int i=0;i<l;i++){
        a[i]=1;
    }
    for(int i=0;i<l;i++){
        b[i]=v[i];
    }
    sort(v.begin(),v.end());
    while(1){
        t++;
        for(int i=0;i<l;i++){
            if(t>=v[i]){
                pCount++;
                a[i]+=1;
                v[i]=v[i]+b[i]*a[i];
            }
        }
        if(pCount>=p){
            break;
        }
    }
    
    return t;
}

int main(){
    
    int p,l,x;
    vector<int> v;
    cin>>p;
    cin>>l;
    for(int i=0;i<l;i++){
        cin>>x;
        v.push_back(x);
    }
    
    int t = calcTime(p,v,l);
    cout<<t;
    
    return 0;
}