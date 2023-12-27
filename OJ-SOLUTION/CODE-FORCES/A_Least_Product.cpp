
#include<bits/stdc++.h>
using  namespace std;


int main()
{
     int t;
     cin>>t;
     while (t--)
     {
        /* code */
        int n;
        cin>>n;

        int arr[n];
        bool findzero=false;

        int product=1;
        int x=1;
        
        for(int i=0;i<n;i++)
        {

           cin>>arr[i];
           if(arr[i]>0)
           {
             x=i+1;
           }

           product=product*arr[i];
          

        }



        

        if(product<=0)
        {
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
            cout<<x<<" "<<0<<endl;
        }





     }
     
}