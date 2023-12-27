
#include<bits/stdc++.h>
using namespace std;



void func(string str,set<string>& myset)
{
      
       if(myset.count(str)==0)
       {
        myset.insert(str);
       }

        if(str.size()==1)
        {
            myset.insert(str);
            return;
        }


     char a=str[0];
     char b=str[1];

     str.erase(0,1);
      func(str,myset);


      str.erase(0,1);
      str=a+str;

      func(str,myset);

}
int main()
{

   int t;
   cin>>t;
   while (t--)
   {

    set<string>myset;

       int n;
       cin>>n;
       string  str;
       cin>>str;

       func(str,myset);
       cout<<myset.size()<<endl;

       
   }
   
}