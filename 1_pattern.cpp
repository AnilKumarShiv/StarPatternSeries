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

    int i,j,n;

    cout<<"Enter limit of tringle :";
    cin>>n;

    for(i=1;i<=n;i++)
    {   
         for(j=1;j<=i;j++)
       {
          cout<<"*";
       }
       cout<<endl;

    }
}