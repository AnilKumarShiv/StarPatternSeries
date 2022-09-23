/* ******************  Swastik sign Pattern   ******************** */
 /*
      * ***
      * *  
      *****
        * *
      *** *
       
                    */


#include<iostream>
using namespace std;

int main(){
     int i,j;
     
    int n ;
     

     cout<<"Enter a number of Swastik :";
     cin>>n;
     int mid=n/2+1;

      for(i=1;i<=n;i++)
      {
        for(j=1;j<=n;j++)
        {
            if(i==mid || j==mid || (i==1 && j>=mid) ||  (i==n &&j<=mid) || (j==1 && i<=mid) || (j==n && i>=mid) )
            cout<<"*";
            else
              cout<<" ";
        }
            cout<<endl;;
        }
        return 0;
 }



//   (i==1 && j>=mid) ||