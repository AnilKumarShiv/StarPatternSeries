/*  * ******************  Z Pattern   ******************** */
 /*
 *******
      * 
     *  
    *   
   *    
  *     
 *******               */


#include<iostream>
using namespace std;

int main(){
     
     int i,j,n;

       cout<<"Enter a number :";
       cin>>n;

        for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
        {
           if(i==1 || i==n || j==n+1-i)
           {
            cout<<"*";
           }
           else
           {
            cout<<" ";
           }
        }
           cout<<"\n";
             
        }
        return 0;
}