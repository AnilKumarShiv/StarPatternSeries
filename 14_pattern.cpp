/*  ************************** pattern pattern ********************* */
/*  

       
                          */    

#include<iostream>

using namespace std;

 int main()
{
    int i,j,n;
    int x=n;
    int y=n;

     cout<<"Enter a number :";
     cin>>n;

     for(i=1;i<=n;i++)
     {
        for(j=1;j<n*2;j++)
        {
            if(j==x || j==y)
            cout<<"*";
            else
            cout<<" ";
        }
        x--;
        y++;
     }
     cout<<endl;
   
    return 0;
}