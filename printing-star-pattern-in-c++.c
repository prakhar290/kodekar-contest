* * * * * * * * *
 *             * 
  *           * 
   *         * 
    *       * 
     *     * 
      *   * 
       * * 
        *



/// solution///



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int spc=0;
    if(n>=0){
        for(int i=n;i>0;i--){
        for(int k=0;k<spc;k++)
                cout<<" ";
        for(int j=i;j>0;j--){
            if(i==n){
                cout<<"* ";
            }
            else{
                if(j==i){ 
                cout<<"* ";
                }
                else if(j==1)
                    cout<<"* ";
                else{
                    cout<<"  ";
                }
            }

        }   
        cout<<endl;
        spc++;
        }
    }
    else{
        cout<<"Please enter a number between 1 and 50.";
    }
    return 0;
}
