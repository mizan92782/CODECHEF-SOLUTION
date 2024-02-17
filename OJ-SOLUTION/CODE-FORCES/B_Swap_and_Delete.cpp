
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         string str;
         cin>>str;

         int one=count(str.begin(),str.end(),'1');
         int zero=count(str.begin(),str.end(),'0');

       


          int count=0;

         for(int i=0;i<str.size();i++)
         {
            
              if((str[i]=='1' && zero==0) || (str[i]=='0' && one==0))
              {
                
                break;
              }


              if(str[i]=='1')
              {
                zero--;
              }else
              {
                one--;
              }

              count++;

            
         }


 
         cout<<str.size()-count<<endl;

     }
     
}