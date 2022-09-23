/*  ************************** pattern pattern ********************* */
/*  

      *00000*
      0*000*0
      00*0*00
      000*000
      00*0*00
      0*000*0
      *00000*
                          */    

#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
     
     cout<<"Enter a number :";
     cin>>n;

     for(i=1;i<=n;i++)
     {
        for(j=1;j<=n;j++)
        {
            if(i==j || (i+j)==(n+1))
            cout<<"*";
            else
            cout<<"0";
        } 
        cout<<endl;
     }

    return 0;
}