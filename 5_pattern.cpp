//    --------------- two in one pattern  -------------
/* ******************  Tringle Pattern  2 ******************** */

 /*
             *     
            * *    
           * * *   
          * * * *  
         * * * * *
                         */ //  pyradmid after a white space after star 

  /*
          *
        * *
      * * *
    * * * *
  * * * * *    */



#include<iostream>
using namespace std;

int main(){

    int i,j,n;

    cout<<"Enter limit of tringle :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
         for(j=n;j>=1;j--)
       {
         if(i>=j)
          cout<<"* ";  // a white space after star given a pyramid

        //  cout<<"*";

         else
          cout<<" ";
         
       } cout<<endl;
       
    } 
     
}