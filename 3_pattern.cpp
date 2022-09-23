/* ******************  Tringle Pattern   ******************** */
 /*
            *
          * * 
        * * *  
      * * * * 
    * * * * *                 */


#include<iostream>
using namespace std;

int main(){
    int i,j,k,n;

    cout<<"Enter limit of tringle :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
       for(j=i;j<n;j++)
        {
         cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
         cout<<"*";
        }
         cout<<endl;
    }
       
} 

