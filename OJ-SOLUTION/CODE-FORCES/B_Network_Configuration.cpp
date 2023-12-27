#include<bits/stdc++.h>
using namespace std;


int main()
{
     int t;
     
        /* code */

        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++)
        {
             cin>>arr[i];
        }

        sort(arr,arr+n);

        int count=0;

       cout<<arr[n-k]<<endl;

     
     
}